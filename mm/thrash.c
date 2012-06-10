/*
 * mm/thrash.c
 *
 * Copyright (C) 2004, Red Hat, Inc.
 * Copyright (C) 2004, Rik van Riel <riel@redhat.com>
 * Released under the GPL, see the file COPYING for details.
 *
 * Simple token based thrashing protection, using the algorithm
 * described in:  http://www.cs.wm.edu/~sjiang/token.pdf
 *
 * Sep 2006, Ashwin Chaugule <ashwin.chaugule@celunite.com>
 * Improved algorithm to pass token:
 * Each task has a priority which is incremented if it contended
 * for the token in an interval less than its previous attempt.
 * If the token is acquired, that task's priority is boosted to prevent
 * the token from bouncing around too often and to let the task make
 * some progress in its execution.
 */

#include <linux/jiffies.h>
#include <linux/mm.h>
#include <linux/sched.h>
#include <linux/swap.h>
#include <linux/memcontrol.h>

#include <trace/events/vmscan.h>

#define TOKEN_AGING_INTERVAL	(0xFF)

struct mm_struct *swap_token_mm;
struct mem_cgroup *swap_token_memcg;
static unsigned int last_aging;

#ifdef CONFIG_CGROUP_MEM_RES_CTLR
static struct mem_cgroup *swap_token_memcg_from_mm(struct mm_struct *mm)
{
	struct mem_cgroup *memcg;

	memcg = try_get_mem_cgroup_from_mm(mm);
	if (memcg)
		css_put(mem_cgroup_css(memcg));

	return memcg;
}
#else
static struct mem_cgroup *swap_token_memcg_from_mm(struct mm_struct *mm)
{
	return NULL;
}
#endif

void grab_swap_token(struct mm_struct *mm)
{
}

/* Called on process exit. */
void __put_swap_token(struct mm_struct *mm)
{
}

static bool match_memcg(struct mem_cgroup *a, struct mem_cgroup *b)
{
	if (!a)
		return true;
	if (!b)
		return true;
	if (a == b)
		return true;
	return false;
}

void disable_swap_token(struct mem_cgroup *memcg)
{
	/* memcg reclaim don't disable unrelated mm token. */
	if (match_memcg(memcg, swap_token_memcg)) {
		spin_lock(&swap_token_lock);
		if (match_memcg(memcg, swap_token_memcg)) {
			trace_disable_swap_token(swap_token_mm);
			swap_token_mm = NULL;
			swap_token_memcg = NULL;
		}
		spin_unlock(&swap_token_lock);
	}
}
