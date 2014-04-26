




<!DOCTYPE html>
<html class="   ">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    
    
    <title>DirtyV_tuna/drivers/cpufreq/cpufreq_hotplug.c at 3a206ce6bf1a15c69b821d53b9f952a393280537 · bsmitty83/DirtyV_tuna</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <meta property="fb:app_id" content="1401488693436528"/>

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="bsmitty83/DirtyV_tuna" name="twitter:title" /><meta content="DirtyV_tuna - vanir kernel for tuna devices" name="twitter:description" /><meta content="https://avatars2.githubusercontent.com/u/2174981?s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars2.githubusercontent.com/u/2174981?s=400" property="og:image" /><meta content="bsmitty83/DirtyV_tuna" property="og:title" /><meta content="https://github.com/bsmitty83/DirtyV_tuna" property="og:url" /><meta content="DirtyV_tuna - vanir kernel for tuna devices" property="og:description" />

    <link rel="assets" href="https://github.global.ssl.fastly.net/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035/">
    <link rel="xhr-socket" href="/_sockets" />

    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="75DF026C:796C:164344E:535BCB69" name="octolytics-dimension-request_id" /><meta content="1382759" name="octolytics-actor-id" /><meta content="k2wl" name="octolytics-actor-login" /><meta content="99483a683e23d7bbe0747adb78567aa53d9be664dc4c299bf8b9ec82b7b7eb4e" name="octolytics-actor-hash" />
    

    
    
    <link rel="icon" type="image/x-icon" href="https://github.global.ssl.fastly.net/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="gy5LWKb8Oukh6FK0/wN7pv7yTLDCw+A/kiMhb4uUZxUl737QN0e5GAN6C94mGyv8fP+Q0+WyRCpSUXImwdNkvw==" name="csrf-token" />

    <link href="https://github.global.ssl.fastly.net/assets/github-cc557869fb9cdb388d66a57c972147dfcf6cc34f.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://github.global.ssl.fastly.net/assets/github2-1202793039fee08f007a3b9e0dd1192c81e4c31d.css" media="all" rel="stylesheet" type="text/css" />
    


        <script crossorigin="anonymous" src="https://github.global.ssl.fastly.net/assets/frameworks-59c02aa6b9ceb85ebef012f790bf56e9ed982fd2.js" type="text/javascript"></script>
        <script async="async" crossorigin="anonymous" src="https://github.global.ssl.fastly.net/assets/github-0dce5cbbd453992693347ff7a62aa955cf152870.js" type="text/javascript"></script>
        
        
      <meta http-equiv="x-pjax-version" content="a85d0164c9fad6eb1b77c00cc27f69b3">

        <link data-pjax-transient rel='permalink' href='/bsmitty83/DirtyV_tuna/blob/3a206ce6bf1a15c69b821d53b9f952a393280537/drivers/cpufreq/cpufreq_hotplug.c'>

  <meta name="description" content="DirtyV_tuna - vanir kernel for tuna devices" />

  <meta content="2174981" name="octolytics-dimension-user_id" /><meta content="bsmitty83" name="octolytics-dimension-user_login" /><meta content="15781760" name="octolytics-dimension-repository_id" /><meta content="bsmitty83/DirtyV_tuna" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="11916878" name="octolytics-dimension-repository_parent_id" /><meta content="jimsth/vanir_tuna" name="octolytics-dimension-repository_parent_nwo" /><meta content="11916878" name="octolytics-dimension-repository_network_root_id" /><meta content="jimsth/vanir_tuna" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/bsmitty83/DirtyV_tuna/commits/3a206ce6bf1a15c69b821d53b9f952a393280537.atom" rel="alternate" title="Recent Commits to DirtyV_tuna:3a206ce6bf1a15c69b821d53b9f952a393280537" type="application/atom+xml" />

  </head>


  <body class="logged_in  env-production linux vis-public fork page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      
      


      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    
    <a href="/notifications" aria-label="You have unread notifications" class="notification-indicator tooltipped tooltipped-s" data-gotokey="n">
        <span class="mail-status unread"></span>
</a>

      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<div class="commandbar">
  <span class="message"></span>
  <input type="text" data-hotkey="s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    data-username="k2wl"
      data-repo="bsmitty83/DirtyV_tuna"
      data-branch="3a206ce6bf1a15c69b821d53b9f952a393280537"
      data-sha="4c60ae61232673b50575596e539571f7297aba6f"
  >
  <div class="display hidden"></div>
</div>

    <input type="hidden" name="nwo" value="bsmitty83/DirtyV_tuna" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target" role="button" aria-haspopup="true">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container" aria-hidden="true">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="help tooltipped tooltipped-s" aria-label="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
        <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="https://help.github.com">Help</a></li>
        </ul>
      </div>

    


  <ul id="user-links">
    <li>
      <a href="/k2wl" class="name">
        <img alt="k2wl" class=" js-avatar" data-user="1382759" height="20" src="https://avatars1.githubusercontent.com/u/1382759?s=140" width="20" /> k2wl
      </a>
    </li>

    <li class="new-menu dropdown-toggle js-menu-container">
      <a href="#" class="js-menu-target tooltipped tooltipped-s" aria-label="Create new...">
        <span class="octicon octicon-plus"></span>
        <span class="dropdown-arrow"></span>
      </a>

      <div class="new-menu-content js-menu-content">
      </div>
    </li>

    <li>
      <a href="/settings/profile" id="account_settings"
        class="tooltipped tooltipped-s"
        aria-label="Account settings ">
        <span class="octicon octicon-tools"></span>
      </a>
    </li>
    <li>
      <form class="logout-form" action="/logout" method="post">
        <button class="sign-out-button tooltipped tooltipped-s" aria-label="Sign out">
          <span class="octicon octicon-log-out"></span>
        </button>
      </form>
    </li>

  </ul>

<div class="js-new-dropdown-contents hidden">
  

<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo-create"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-organization"></span> New organization</a>
  </li>


    <li class="section-title">
      <span title="bsmitty83/DirtyV_tuna">This repository</span>
    </li>
      <li>
        <a href="/bsmitty83/DirtyV_tuna/issues/new"><span class="octicon octicon-issue-opened"></span> New issue</a>
      </li>
</ul>

</div>


    
  </div>
</div>

      

        



      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="I5S1iY5CdREjxBbVRA52w1i+dKp/tBuD/Q1PRnUSce5+Z6IfTOvXGfsYChrae0jieyLRjGJuJo6/NNO10J1yHw==" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="15781760" />

    <div class="select-menu js-menu-container js-select-menu">
      <a class="social-count js-social-count" href="/bsmitty83/DirtyV_tuna/watchers">
        7
      </a>
      <span class="minibutton select-menu-button with-count js-menu-target" role="button" tabindex="0" aria-haspopup="true">
        <span class="js-select-button">
          <span class="octicon octicon-eye-watch"></span>
          Watch
        </span>
      </span>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container" role="menu">

            <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for conversations in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-watch"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

  <li>
  

  <div class="js-toggler-container js-social-container starring-container ">
    <a href="/bsmitty83/DirtyV_tuna/unstar"
      class="minibutton with-count js-toggler-target star-button starred"
      aria-label="Unstar this repository" title="Unstar bsmitty83/DirtyV_tuna" data-remote="true" data-method="post" rel="nofollow">
      <span class="octicon octicon-star-delete"></span><span class="text">Unstar</span>
    </a>

    <a href="/bsmitty83/DirtyV_tuna/star"
      class="minibutton with-count js-toggler-target star-button unstarred"
      aria-label="Star this repository" title="Star bsmitty83/DirtyV_tuna" data-remote="true" data-method="post" rel="nofollow">
      <span class="octicon octicon-star"></span><span class="text">Star</span>
    </a>

      <a class="social-count js-social-count" href="/bsmitty83/DirtyV_tuna/stargazers">
        5
      </a>
  </div>

  </li>


        <li>
          <a href="/bsmitty83/DirtyV_tuna/fork" class="minibutton with-count js-toggler-target fork-button lighter tooltipped-n" title="Fork your own copy of bsmitty83/DirtyV_tuna to your account" aria-label="Fork your own copy of bsmitty83/DirtyV_tuna to your account" rel="facebox nofollow">
            <span class="octicon octicon-git-branch-create"></span><span class="text">Fork</span>
          </a>
          <a href="/bsmitty83/DirtyV_tuna/network" class="social-count">8</a>
        </li>


</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo-forked"></span>
          <span class="author"><a href="/bsmitty83" class="url fn" itemprop="url" rel="author"><span itemprop="title">bsmitty83</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/bsmitty83/DirtyV_tuna" class="js-current-repository js-repo-home-link">DirtyV_tuna</a></strong>

          <span class="page-context-loader">
            <img alt="Octocat-spinner-32" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

            <span class="fork-flag">
              <span class="text">forked from <a href="/jimsth/vanir_tuna">jimsth/vanir_tuna</a></span>
            </span>
        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline js-new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped tooltipped-w" aria-label="Code">
        <a href="/bsmitty83/DirtyV_tuna" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-gotokey="c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /bsmitty83/DirtyV_tuna">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

        <li class="tooltipped tooltipped-w" aria-label="Issues">
          <a href="/bsmitty83/DirtyV_tuna/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-gotokey="i" data-selected-links="repo_issues /bsmitty83/DirtyV_tuna/issues">
            <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>

      <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
        <a href="/bsmitty83/DirtyV_tuna/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-gotokey="p" data-selected-links="repo_pulls /bsmitty83/DirtyV_tuna/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


        <li class="tooltipped tooltipped-w" aria-label="Wiki">
          <a href="/bsmitty83/DirtyV_tuna/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_wiki /bsmitty83/DirtyV_tuna/wiki">
            <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped tooltipped-w" aria-label="Pulse">
        <a href="/bsmitty83/DirtyV_tuna/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /bsmitty83/DirtyV_tuna/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Graphs">
        <a href="/bsmitty83/DirtyV_tuna/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /bsmitty83/DirtyV_tuna/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Network">
        <a href="/bsmitty83/DirtyV_tuna/network" aria-label="Network" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-selected-links="repo_network /bsmitty83/DirtyV_tuna/network">
          <span class="octicon octicon-git-branch"></span> <span class="full-word">Network</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


  </div>
</div>

              <div class="only-with-full-nav">
                

  

<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/bsmitty83/DirtyV_tuna.git" readonly="readonly">

    <span aria-label="copy to clipboard" class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/bsmitty83/DirtyV_tuna.git" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=clone">
  <h3><strong>SSH</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="git@github.com:bsmitty83/DirtyV_tuna.git" readonly="readonly">

    <span aria-label="copy to clipboard" class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="git@github.com:bsmitty83/DirtyV_tuna.git" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/bsmitty83/DirtyV_tuna" readonly="readonly">

    <span aria-label="copy to clipboard" class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/bsmitty83/DirtyV_tuna" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
      <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>,
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>



                <a href="/bsmitty83/DirtyV_tuna/archive/3a206ce6bf1a15c69b821d53b9f952a393280537.zip"
                   class="minibutton sidebar-button"
                   aria-label="Download bsmitty83/DirtyV_tuna as a zip file"
                   title="Download bsmitty83/DirtyV_tuna as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:4d0e78874ad76cea836f697c34d0b404 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/bsmitty83/DirtyV_tuna/find/3a206ce6bf1a15c69b821d53b9f952a393280537" data-pjax data-hotkey="t" class="js-show-file-finder" style="display:none">Show File Finder</a>

<div class="file-navigation">
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="SmittyV-eXp4"
    data-ref=""
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>tree:</i>
    <span class="js-select-button">3a206ce6bf</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-remove-close js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/Dirty_V/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="Dirty_V"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="Dirty_V">Dirty_V</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/DirtyV2/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="DirtyV2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="DirtyV2">DirtyV2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/DirtyV3/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="DirtyV3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="DirtyV3">DirtyV3</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/Smitty-eXp/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="Smitty-eXp"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="Smitty-eXp">Smitty-eXp</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/SmittyV/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="SmittyV"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="SmittyV">SmittyV</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/SmittyV-eXp2/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="SmittyV-eXp2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="SmittyV-eXp2">SmittyV-eXp2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/SmittyV-eXp3/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="SmittyV-eXp3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="SmittyV-eXp3">SmittyV-eXp3</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/SmittyV-eXp4/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="SmittyV-eXp4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="SmittyV-eXp4">SmittyV-eXp4</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/jb_mr2/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="jb_mr2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="jb_mr2">jb_mr2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/jim_mr2_exp/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="jim_mr2_exp"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="jim_mr2_exp">jim_mr2_exp</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/jim_mr2_exp_bm/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="jim_mr2_exp_bm"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="jim_mr2_exp_bm">jim_mr2_exp_bm</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/blob/master/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/tree/v1.0.7/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="v1.0.7"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="v1.0.7">v1.0.7</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/tree/v0.7.4_4.3_exp/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="v0.7.4_4.3_exp"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="v0.7.4_4.3_exp">v0.7.4_4.3_exp</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/tree/v0.7.3_4.3_exp/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="v0.7.3_4.3_exp"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="v0.7.3_4.3_exp">v0.7.3_4.3_exp</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/bsmitty83/DirtyV_tuna/tree/v0.7.2_4.3_exp/drivers/cpufreq/cpufreq_hotplug.c"
                 data-name="v0.7.2_4.3_exp"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="v0.7.2_4.3_exp">v0.7.2_4.3_exp</a>
            </div> <!-- /.select-menu-item -->
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/bsmitty83/DirtyV_tuna/tree/3a206ce6bf1a15c69b821d53b9f952a393280537" data-branch="3a206ce6bf1a15c69b821d53b9f952a393280537" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">DirtyV_tuna</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/bsmitty83/DirtyV_tuna/tree/3a206ce6bf1a15c69b821d53b9f952a393280537/drivers" data-branch="3a206ce6bf1a15c69b821d53b9f952a393280537" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">drivers</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/bsmitty83/DirtyV_tuna/tree/3a206ce6bf1a15c69b821d53b9f952a393280537/drivers/cpufreq" data-branch="3a206ce6bf1a15c69b821d53b9f952a393280537" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">cpufreq</span></a></span><span class="separator"> / </span><strong class="final-path">cpufreq_hotplug.c</strong> <span aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="drivers/cpufreq/cpufreq_hotplug.c" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


  <div class="commit commit-loader file-history-tease js-deferred-content" data-url="/bsmitty83/DirtyV_tuna/contributors/3a206ce6bf1a15c69b821d53b9f952a393280537/drivers/cpufreq/cpufreq_hotplug.c">
    Fetching contributors…

    <div class="participation">
      <p class="loader-loading"><img alt="Octocat-spinner-32-eaf2f5" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" /></p>
      <p class="loader-error">Cannot retrieve contributors at this time</p>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
        <span class="meta-divider"></span>
          <span>745 lines (619 sloc)</span>
          <span class="meta-divider"></span>
        <span>20.854 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
              <a class="minibutton disabled tooltipped tooltipped-w" href="#"
                 aria-label="You must be on a branch to make or propose changes to this file">Edit</a>
          <a href="/bsmitty83/DirtyV_tuna/raw/3a206ce6bf1a15c69b821d53b9f952a393280537/drivers/cpufreq/cpufreq_hotplug.c" class="button minibutton " id="raw-url">Raw</a>
            <a href="/bsmitty83/DirtyV_tuna/blame/3a206ce6bf1a15c69b821d53b9f952a393280537/drivers/cpufreq/cpufreq_hotplug.c" class="button minibutton js-update-url-with-hash">Blame</a>
          <a href="/bsmitty83/DirtyV_tuna/commits/3a206ce6bf1a15c69b821d53b9f952a393280537/drivers/cpufreq/cpufreq_hotplug.c" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->
          <a class="minibutton danger disabled empty-icon tooltipped tooltipped-w" href="#"
             aria-label="You must be on a branch to make or propose changes to this file">
          Delete
        </a>
      </div><!-- /.actions -->
    </div>
        <div class="blob-wrapper data type-c js-blob-data">
        <table class="file-code file-diff tab-size-8">
          <tr class="file-code-line">
            <td class="blob-line-nums">
              <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
<span id="L601" rel="#L601">601</span>
<span id="L602" rel="#L602">602</span>
<span id="L603" rel="#L603">603</span>
<span id="L604" rel="#L604">604</span>
<span id="L605" rel="#L605">605</span>
<span id="L606" rel="#L606">606</span>
<span id="L607" rel="#L607">607</span>
<span id="L608" rel="#L608">608</span>
<span id="L609" rel="#L609">609</span>
<span id="L610" rel="#L610">610</span>
<span id="L611" rel="#L611">611</span>
<span id="L612" rel="#L612">612</span>
<span id="L613" rel="#L613">613</span>
<span id="L614" rel="#L614">614</span>
<span id="L615" rel="#L615">615</span>
<span id="L616" rel="#L616">616</span>
<span id="L617" rel="#L617">617</span>
<span id="L618" rel="#L618">618</span>
<span id="L619" rel="#L619">619</span>
<span id="L620" rel="#L620">620</span>
<span id="L621" rel="#L621">621</span>
<span id="L622" rel="#L622">622</span>
<span id="L623" rel="#L623">623</span>
<span id="L624" rel="#L624">624</span>
<span id="L625" rel="#L625">625</span>
<span id="L626" rel="#L626">626</span>
<span id="L627" rel="#L627">627</span>
<span id="L628" rel="#L628">628</span>
<span id="L629" rel="#L629">629</span>
<span id="L630" rel="#L630">630</span>
<span id="L631" rel="#L631">631</span>
<span id="L632" rel="#L632">632</span>
<span id="L633" rel="#L633">633</span>
<span id="L634" rel="#L634">634</span>
<span id="L635" rel="#L635">635</span>
<span id="L636" rel="#L636">636</span>
<span id="L637" rel="#L637">637</span>
<span id="L638" rel="#L638">638</span>
<span id="L639" rel="#L639">639</span>
<span id="L640" rel="#L640">640</span>
<span id="L641" rel="#L641">641</span>
<span id="L642" rel="#L642">642</span>
<span id="L643" rel="#L643">643</span>
<span id="L644" rel="#L644">644</span>
<span id="L645" rel="#L645">645</span>
<span id="L646" rel="#L646">646</span>
<span id="L647" rel="#L647">647</span>
<span id="L648" rel="#L648">648</span>
<span id="L649" rel="#L649">649</span>
<span id="L650" rel="#L650">650</span>
<span id="L651" rel="#L651">651</span>
<span id="L652" rel="#L652">652</span>
<span id="L653" rel="#L653">653</span>
<span id="L654" rel="#L654">654</span>
<span id="L655" rel="#L655">655</span>
<span id="L656" rel="#L656">656</span>
<span id="L657" rel="#L657">657</span>
<span id="L658" rel="#L658">658</span>
<span id="L659" rel="#L659">659</span>
<span id="L660" rel="#L660">660</span>
<span id="L661" rel="#L661">661</span>
<span id="L662" rel="#L662">662</span>
<span id="L663" rel="#L663">663</span>
<span id="L664" rel="#L664">664</span>
<span id="L665" rel="#L665">665</span>
<span id="L666" rel="#L666">666</span>
<span id="L667" rel="#L667">667</span>
<span id="L668" rel="#L668">668</span>
<span id="L669" rel="#L669">669</span>
<span id="L670" rel="#L670">670</span>
<span id="L671" rel="#L671">671</span>
<span id="L672" rel="#L672">672</span>
<span id="L673" rel="#L673">673</span>
<span id="L674" rel="#L674">674</span>
<span id="L675" rel="#L675">675</span>
<span id="L676" rel="#L676">676</span>
<span id="L677" rel="#L677">677</span>
<span id="L678" rel="#L678">678</span>
<span id="L679" rel="#L679">679</span>
<span id="L680" rel="#L680">680</span>
<span id="L681" rel="#L681">681</span>
<span id="L682" rel="#L682">682</span>
<span id="L683" rel="#L683">683</span>
<span id="L684" rel="#L684">684</span>
<span id="L685" rel="#L685">685</span>
<span id="L686" rel="#L686">686</span>
<span id="L687" rel="#L687">687</span>
<span id="L688" rel="#L688">688</span>
<span id="L689" rel="#L689">689</span>
<span id="L690" rel="#L690">690</span>
<span id="L691" rel="#L691">691</span>
<span id="L692" rel="#L692">692</span>
<span id="L693" rel="#L693">693</span>
<span id="L694" rel="#L694">694</span>
<span id="L695" rel="#L695">695</span>
<span id="L696" rel="#L696">696</span>
<span id="L697" rel="#L697">697</span>
<span id="L698" rel="#L698">698</span>
<span id="L699" rel="#L699">699</span>
<span id="L700" rel="#L700">700</span>
<span id="L701" rel="#L701">701</span>
<span id="L702" rel="#L702">702</span>
<span id="L703" rel="#L703">703</span>
<span id="L704" rel="#L704">704</span>
<span id="L705" rel="#L705">705</span>
<span id="L706" rel="#L706">706</span>
<span id="L707" rel="#L707">707</span>
<span id="L708" rel="#L708">708</span>
<span id="L709" rel="#L709">709</span>
<span id="L710" rel="#L710">710</span>
<span id="L711" rel="#L711">711</span>
<span id="L712" rel="#L712">712</span>
<span id="L713" rel="#L713">713</span>
<span id="L714" rel="#L714">714</span>
<span id="L715" rel="#L715">715</span>
<span id="L716" rel="#L716">716</span>
<span id="L717" rel="#L717">717</span>
<span id="L718" rel="#L718">718</span>
<span id="L719" rel="#L719">719</span>
<span id="L720" rel="#L720">720</span>
<span id="L721" rel="#L721">721</span>
<span id="L722" rel="#L722">722</span>
<span id="L723" rel="#L723">723</span>
<span id="L724" rel="#L724">724</span>
<span id="L725" rel="#L725">725</span>
<span id="L726" rel="#L726">726</span>
<span id="L727" rel="#L727">727</span>
<span id="L728" rel="#L728">728</span>
<span id="L729" rel="#L729">729</span>
<span id="L730" rel="#L730">730</span>
<span id="L731" rel="#L731">731</span>
<span id="L732" rel="#L732">732</span>
<span id="L733" rel="#L733">733</span>
<span id="L734" rel="#L734">734</span>
<span id="L735" rel="#L735">735</span>
<span id="L736" rel="#L736">736</span>
<span id="L737" rel="#L737">737</span>
<span id="L738" rel="#L738">738</span>
<span id="L739" rel="#L739">739</span>
<span id="L740" rel="#L740">740</span>
<span id="L741" rel="#L741">741</span>
<span id="L742" rel="#L742">742</span>
<span id="L743" rel="#L743">743</span>
<span id="L744" rel="#L744">744</span>

            </td>
            <td class="blob-line-code"><div class="code-body highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * CPUFreq hotplug governor</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * Copyright (C) 2010 Texas Instruments, Inc.</span></div><div class='line' id='LC5'><span class="cm"> *   Mike Turquette &lt;mturquette@ti.com&gt;</span></div><div class='line' id='LC6'><span class="cm"> *   Santosh Shilimkar &lt;santosh.shilimkar@ti.com&gt;</span></div><div class='line' id='LC7'><span class="cm"> *</span></div><div class='line' id='LC8'><span class="cm"> * Based on ondemand governor</span></div><div class='line' id='LC9'><span class="cm"> * Copyright (C)  2001 Russell King</span></div><div class='line' id='LC10'><span class="cm"> *           (C)  2003 Venkatesh Pallipadi &lt;venkatesh.pallipadi@intel.com&gt;,</span></div><div class='line' id='LC11'><span class="cm"> *                     Jun Nakajima &lt;jun.nakajima@intel.com&gt;</span></div><div class='line' id='LC12'><span class="cm"> *</span></div><div class='line' id='LC13'><span class="cm"> * This program is free software; you can redistribute it and/or modify</span></div><div class='line' id='LC14'><span class="cm"> * it under the terms of the GNU General Public License version 2 as</span></div><div class='line' id='LC15'><span class="cm"> * published by the Free Software Foundation.</span></div><div class='line' id='LC16'><span class="cm"> */</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="cp">#include &lt;linux/kernel.h&gt;</span></div><div class='line' id='LC19'><span class="cp">#include &lt;linux/module.h&gt;</span></div><div class='line' id='LC20'><span class="cp">#include &lt;linux/init.h&gt;</span></div><div class='line' id='LC21'><span class="cp">#include &lt;linux/cpufreq.h&gt;</span></div><div class='line' id='LC22'><span class="cp">#include &lt;linux/cpu.h&gt;</span></div><div class='line' id='LC23'><span class="cp">#include &lt;linux/jiffies.h&gt;</span></div><div class='line' id='LC24'><span class="cp">#include &lt;linux/kernel_stat.h&gt;</span></div><div class='line' id='LC25'><span class="cp">#include &lt;linux/mutex.h&gt;</span></div><div class='line' id='LC26'><span class="cp">#include &lt;linux/hrtimer.h&gt;</span></div><div class='line' id='LC27'><span class="cp">#include &lt;linux/tick.h&gt;</span></div><div class='line' id='LC28'><span class="cp">#include &lt;linux/ktime.h&gt;</span></div><div class='line' id='LC29'><span class="cp">#include &lt;linux/sched.h&gt;</span></div><div class='line' id='LC30'><span class="cp">#include &lt;linux/err.h&gt;</span></div><div class='line' id='LC31'><span class="cp">#include &lt;linux/slab.h&gt;</span></div><div class='line' id='LC32'><br/></div><div class='line' id='LC33'><span class="cm">/* greater than 80% avg load across online CPUs increases frequency */</span></div><div class='line' id='LC34'><span class="cp">#define DEFAULT_UP_FREQ_MIN_LOAD			(80)</span></div><div class='line' id='LC35'><br/></div><div class='line' id='LC36'><span class="cm">/* Keep 10% of idle under the up threshold when decreasing the frequency */</span></div><div class='line' id='LC37'><span class="cp">#define DEFAULT_FREQ_DOWN_DIFFERENTIAL			(10)</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><span class="cm">/* less than 35% avg load across online CPUs decreases frequency */</span></div><div class='line' id='LC40'><span class="cp">#define DEFAULT_DOWN_FREQ_MAX_LOAD			(35)</span></div><div class='line' id='LC41'><br/></div><div class='line' id='LC42'><span class="cm">/* default sampling period (uSec) is bogus; 10x ondemand&#39;s default for x86 */</span></div><div class='line' id='LC43'><span class="cp">#define DEFAULT_SAMPLING_PERIOD				(100000)</span></div><div class='line' id='LC44'><br/></div><div class='line' id='LC45'><span class="cm">/* default number of sampling periods to average before hotplug-in decision */</span></div><div class='line' id='LC46'><span class="cp">#define DEFAULT_HOTPLUG_IN_SAMPLING_PERIODS		(5)</span></div><div class='line' id='LC47'><br/></div><div class='line' id='LC48'><span class="cm">/* default number of sampling periods to average before hotplug-out decision */</span></div><div class='line' id='LC49'><span class="cp">#define DEFAULT_HOTPLUG_OUT_SAMPLING_PERIODS		(20)</span></div><div class='line' id='LC50'><br/></div><div class='line' id='LC51'><span class="k">static</span> <span class="kt">void</span> <span class="nf">do_dbs_timer</span><span class="p">(</span><span class="k">struct</span> <span class="n">work_struct</span> <span class="o">*</span><span class="n">work</span><span class="p">);</span></div><div class='line' id='LC52'><span class="k">static</span> <span class="kt">int</span> <span class="nf">cpufreq_governor_dbs</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span></div><div class='line' id='LC53'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">event</span><span class="p">);</span></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><span class="cp">#ifndef CONFIG_CPU_FREQ_DEFAULT_GOV_HOTPLUG</span></div><div class='line' id='LC56'><span class="k">static</span></div><div class='line' id='LC57'><span class="cp">#endif</span></div><div class='line' id='LC58'><span class="k">struct</span> <span class="n">cpufreq_governor</span> <span class="n">cpufreq_gov_hotplug</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC59'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">name</span>                   <span class="o">=</span> <span class="s">&quot;hotplug&quot;</span><span class="p">,</span></div><div class='line' id='LC60'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">governor</span>               <span class="o">=</span> <span class="n">cpufreq_governor_dbs</span><span class="p">,</span></div><div class='line' id='LC61'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">.</span><span class="n">owner</span>                  <span class="o">=</span> <span class="n">THIS_MODULE</span><span class="p">,</span></div><div class='line' id='LC62'><span class="p">};</span></div><div class='line' id='LC63'><br/></div><div class='line' id='LC64'><span class="k">struct</span> <span class="n">cpu_dbs_info_s</span> <span class="p">{</span></div><div class='line' id='LC65'>	<span class="kt">cputime64_t</span> <span class="n">prev_cpu_idle</span><span class="p">;</span></div><div class='line' id='LC66'>	<span class="kt">cputime64_t</span> <span class="n">prev_cpu_wall</span><span class="p">;</span></div><div class='line' id='LC67'>	<span class="kt">cputime64_t</span> <span class="n">prev_cpu_nice</span><span class="p">;</span></div><div class='line' id='LC68'>	<span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">cur_policy</span><span class="p">;</span></div><div class='line' id='LC69'>	<span class="k">struct</span> <span class="n">delayed_work</span> <span class="n">work</span><span class="p">;</span></div><div class='line' id='LC70'>	<span class="k">struct</span> <span class="n">cpufreq_frequency_table</span> <span class="o">*</span><span class="n">freq_table</span><span class="p">;</span></div><div class='line' id='LC71'>	<span class="kt">int</span> <span class="n">cpu</span><span class="p">;</span></div><div class='line' id='LC72'>	<span class="cm">/*</span></div><div class='line' id='LC73'><span class="cm">	 * percpu mutex that serializes governor limit change with</span></div><div class='line' id='LC74'><span class="cm">	 * do_dbs_timer invocation. We do not want do_dbs_timer to run</span></div><div class='line' id='LC75'><span class="cm">	 * when user is changing the governor or limits.</span></div><div class='line' id='LC76'><span class="cm">	 */</span></div><div class='line' id='LC77'>	<span class="k">struct</span> <span class="n">mutex</span> <span class="n">timer_mutex</span><span class="p">;</span></div><div class='line' id='LC78'><span class="p">};</span></div><div class='line' id='LC79'><span class="k">static</span> <span class="nf">DEFINE_PER_CPU</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpu_dbs_info_s</span><span class="p">,</span> <span class="n">hp_cpu_dbs_info</span><span class="p">);</span></div><div class='line' id='LC80'><br/></div><div class='line' id='LC81'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">dbs_enable</span><span class="p">;</span>	<span class="cm">/* number of CPUs using this policy */</span></div><div class='line' id='LC82'><br/></div><div class='line' id='LC83'><span class="cm">/*</span></div><div class='line' id='LC84'><span class="cm"> * dbs_mutex protects data in dbs_tuners_ins from concurrent changes on</span></div><div class='line' id='LC85'><span class="cm"> * different CPUs. It protects dbs_enable in governor start/stop.</span></div><div class='line' id='LC86'><span class="cm"> */</span></div><div class='line' id='LC87'><span class="k">static</span> <span class="nf">DEFINE_MUTEX</span><span class="p">(</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC88'><br/></div><div class='line' id='LC89'><span class="k">static</span> <span class="k">struct</span> <span class="n">workqueue_struct</span>	<span class="o">*</span><span class="n">khotplug_wq</span><span class="p">;</span></div><div class='line' id='LC90'><br/></div><div class='line' id='LC91'><span class="k">static</span> <span class="k">struct</span> <span class="n">dbs_tuners</span> <span class="p">{</span></div><div class='line' id='LC92'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">sampling_rate</span><span class="p">;</span></div><div class='line' id='LC93'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">up_threshold</span><span class="p">;</span></div><div class='line' id='LC94'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">down_differential</span><span class="p">;</span></div><div class='line' id='LC95'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">down_threshold</span><span class="p">;</span></div><div class='line' id='LC96'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">hotplug_in_sampling_periods</span><span class="p">;</span></div><div class='line' id='LC97'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">hotplug_out_sampling_periods</span><span class="p">;</span></div><div class='line' id='LC98'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">hotplug_load_index</span><span class="p">;</span></div><div class='line' id='LC99'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="o">*</span><span class="n">hotplug_load_history</span><span class="p">;</span></div><div class='line' id='LC100'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">ignore_nice</span><span class="p">;</span></div><div class='line' id='LC101'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">io_is_busy</span><span class="p">;</span></div><div class='line' id='LC102'><span class="p">}</span> <span class="n">dbs_tuners_ins</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC103'>	<span class="p">.</span><span class="n">sampling_rate</span> <span class="o">=</span>		<span class="n">DEFAULT_SAMPLING_PERIOD</span><span class="p">,</span></div><div class='line' id='LC104'>	<span class="p">.</span><span class="n">up_threshold</span> <span class="o">=</span>			<span class="n">DEFAULT_UP_FREQ_MIN_LOAD</span><span class="p">,</span></div><div class='line' id='LC105'>	<span class="p">.</span><span class="n">down_differential</span> <span class="o">=</span>            <span class="n">DEFAULT_FREQ_DOWN_DIFFERENTIAL</span><span class="p">,</span></div><div class='line' id='LC106'>	<span class="p">.</span><span class="n">down_threshold</span> <span class="o">=</span>		<span class="n">DEFAULT_DOWN_FREQ_MAX_LOAD</span><span class="p">,</span></div><div class='line' id='LC107'>	<span class="p">.</span><span class="n">hotplug_in_sampling_periods</span> <span class="o">=</span>	<span class="n">DEFAULT_HOTPLUG_IN_SAMPLING_PERIODS</span><span class="p">,</span></div><div class='line' id='LC108'>	<span class="p">.</span><span class="n">hotplug_out_sampling_periods</span> <span class="o">=</span>	<span class="n">DEFAULT_HOTPLUG_OUT_SAMPLING_PERIODS</span><span class="p">,</span></div><div class='line' id='LC109'>	<span class="p">.</span><span class="n">hotplug_load_index</span> <span class="o">=</span>		<span class="mi">0</span><span class="p">,</span></div><div class='line' id='LC110'>	<span class="p">.</span><span class="n">ignore_nice</span> <span class="o">=</span>			<span class="mi">0</span><span class="p">,</span></div><div class='line' id='LC111'>	<span class="p">.</span><span class="n">io_is_busy</span> <span class="o">=</span>			<span class="mi">0</span><span class="p">,</span></div><div class='line' id='LC112'><span class="p">};</span></div><div class='line' id='LC113'><br/></div><div class='line' id='LC114'><span class="cm">/*</span></div><div class='line' id='LC115'><span class="cm"> * A corner case exists when switching io_is_busy at run-time: comparing idle</span></div><div class='line' id='LC116'><span class="cm"> * times from a non-io_is_busy period to an io_is_busy period (or vice-versa)</span></div><div class='line' id='LC117'><span class="cm"> * will misrepresent the actual change in system idleness.  We ignore this</span></div><div class='line' id='LC118'><span class="cm"> * corner case: enabling io_is_busy might cause freq increase and disabling</span></div><div class='line' id='LC119'><span class="cm"> * might cause freq decrease, which probably matches the original intent.</span></div><div class='line' id='LC120'><span class="cm"> */</span></div><div class='line' id='LC121'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">cputime64_t</span> <span class="nf">get_cpu_idle_time</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span><span class="p">,</span> <span class="kt">cputime64_t</span> <span class="o">*</span><span class="n">wall</span><span class="p">)</span></div><div class='line' id='LC122'><span class="p">{</span></div><div class='line' id='LC123'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u64</span> <span class="n">idle_time</span><span class="p">;</span></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">u64</span> <span class="n">iowait_time</span><span class="p">;</span></div><div class='line' id='LC125'><br/></div><div class='line' id='LC126'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* cpufreq-hotplug always assumes CONFIG_NO_HZ */</span></div><div class='line' id='LC127'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">idle_time</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_us</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="n">wall</span><span class="p">);</span></div><div class='line' id='LC128'><br/></div><div class='line' id='LC129'>	<span class="cm">/* add time spent doing I/O to idle time */</span></div><div class='line' id='LC130'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">io_is_busy</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC131'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">iowait_time</span> <span class="o">=</span> <span class="n">get_cpu_iowait_time_us</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="n">wall</span><span class="p">);</span></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* cpufreq-hotplug always assumes CONFIG_NO_HZ */</span></div><div class='line' id='LC133'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">iowait_time</span> <span class="o">!=</span> <span class="o">-</span><span class="mi">1ULL</span> <span class="o">&amp;&amp;</span> <span class="n">idle_time</span> <span class="o">&gt;=</span> <span class="n">iowait_time</span><span class="p">)</span></div><div class='line' id='LC134'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">idle_time</span> <span class="o">-=</span> <span class="n">iowait_time</span><span class="p">;</span></div><div class='line' id='LC135'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC136'><br/></div><div class='line' id='LC137'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">idle_time</span><span class="p">;</span></div><div class='line' id='LC138'><span class="p">}</span></div><div class='line' id='LC139'><br/></div><div class='line' id='LC140'><span class="cm">/************************** sysfs interface ************************/</span></div><div class='line' id='LC141'><br/></div><div class='line' id='LC142'><span class="cm">/* XXX look at global sysfs macros in cpufreq.h, can those be used here? */</span></div><div class='line' id='LC143'><br/></div><div class='line' id='LC144'><span class="cm">/* cpufreq_hotplug Governor Tunables */</span></div><div class='line' id='LC145'><span class="cp">#define show_one(file_name, object)					\</span></div><div class='line' id='LC146'><span class="cp">static ssize_t show_##file_name						\</span></div><div class='line' id='LC147'><span class="cp">(struct kobject *kobj, struct attribute *attr, char *buf)		\</span></div><div class='line' id='LC148'><span class="cp">{									\</span></div><div class='line' id='LC149'><span class="cp">	return sprintf(buf, &quot;%u\n&quot;, dbs_tuners_ins.object);		\</span></div><div class='line' id='LC150'><span class="cp">}</span></div><div class='line' id='LC151'><span class="n">show_one</span><span class="p">(</span><span class="n">sampling_rate</span><span class="p">,</span> <span class="n">sampling_rate</span><span class="p">);</span></div><div class='line' id='LC152'><span class="n">show_one</span><span class="p">(</span><span class="n">up_threshold</span><span class="p">,</span> <span class="n">up_threshold</span><span class="p">);</span></div><div class='line' id='LC153'><span class="n">show_one</span><span class="p">(</span><span class="n">down_differential</span><span class="p">,</span> <span class="n">down_differential</span><span class="p">);</span></div><div class='line' id='LC154'><span class="n">show_one</span><span class="p">(</span><span class="n">down_threshold</span><span class="p">,</span> <span class="n">down_threshold</span><span class="p">);</span></div><div class='line' id='LC155'><span class="n">show_one</span><span class="p">(</span><span class="n">hotplug_in_sampling_periods</span><span class="p">,</span> <span class="n">hotplug_in_sampling_periods</span><span class="p">);</span></div><div class='line' id='LC156'><span class="n">show_one</span><span class="p">(</span><span class="n">hotplug_out_sampling_periods</span><span class="p">,</span> <span class="n">hotplug_out_sampling_periods</span><span class="p">);</span></div><div class='line' id='LC157'><span class="n">show_one</span><span class="p">(</span><span class="n">ignore_nice_load</span><span class="p">,</span> <span class="n">ignore_nice</span><span class="p">);</span></div><div class='line' id='LC158'><span class="n">show_one</span><span class="p">(</span><span class="n">io_is_busy</span><span class="p">,</span> <span class="n">io_is_busy</span><span class="p">);</span></div><div class='line' id='LC159'><br/></div><div class='line' id='LC160'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_sampling_rate</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">a</span><span class="p">,</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">b</span><span class="p">,</span></div><div class='line' id='LC161'>				   <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC162'><span class="p">{</span></div><div class='line' id='LC163'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC164'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC165'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">sscanf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC166'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">!=</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC167'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC168'><br/></div><div class='line' id='LC169'>	<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC170'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">sampling_rate</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC171'>	<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC172'><br/></div><div class='line' id='LC173'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC174'><span class="p">}</span></div><div class='line' id='LC175'><br/></div><div class='line' id='LC176'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_up_threshold</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">a</span><span class="p">,</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">b</span><span class="p">,</span></div><div class='line' id='LC177'>				  <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC178'><span class="p">{</span></div><div class='line' id='LC179'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC180'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC181'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">sscanf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC182'><br/></div><div class='line' id='LC183'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">!=</span> <span class="mi">1</span> <span class="o">||</span> <span class="n">input</span> <span class="o">&lt;=</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">down_threshold</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC184'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC185'>	<span class="p">}</span></div><div class='line' id='LC186'><br/></div><div class='line' id='LC187'>	<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC188'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">up_threshold</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC189'>	<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC190'><br/></div><div class='line' id='LC191'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC192'><span class="p">}</span></div><div class='line' id='LC193'><br/></div><div class='line' id='LC194'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_down_differential</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">a</span><span class="p">,</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">b</span><span class="p">,</span></div><div class='line' id='LC195'>				  <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC196'><span class="p">{</span></div><div class='line' id='LC197'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC198'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC199'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">sscanf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC200'><br/></div><div class='line' id='LC201'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">!=</span> <span class="mi">1</span> <span class="o">||</span> <span class="n">input</span> <span class="o">&gt;=</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">up_threshold</span><span class="p">)</span></div><div class='line' id='LC202'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC203'><br/></div><div class='line' id='LC204'>	<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC205'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">down_differential</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC206'>	<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC207'><br/></div><div class='line' id='LC208'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC209'><span class="p">}</span></div><div class='line' id='LC210'><br/></div><div class='line' id='LC211'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_down_threshold</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">a</span><span class="p">,</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">b</span><span class="p">,</span></div><div class='line' id='LC212'>				  <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC213'><span class="p">{</span></div><div class='line' id='LC214'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC215'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC216'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">sscanf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC217'><br/></div><div class='line' id='LC218'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">!=</span> <span class="mi">1</span> <span class="o">||</span> <span class="n">input</span> <span class="o">&gt;=</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">up_threshold</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC219'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC220'>	<span class="p">}</span></div><div class='line' id='LC221'><br/></div><div class='line' id='LC222'>	<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC223'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">down_threshold</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC224'>	<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC225'><br/></div><div class='line' id='LC226'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC227'><span class="p">}</span></div><div class='line' id='LC228'><br/></div><div class='line' id='LC229'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_hotplug_in_sampling_periods</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">a</span><span class="p">,</span></div><div class='line' id='LC230'>		<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">b</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC231'><span class="p">{</span></div><div class='line' id='LC232'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC233'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="o">*</span><span class="n">temp</span><span class="p">;</span></div><div class='line' id='LC234'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">max_windows</span><span class="p">;</span></div><div class='line' id='LC235'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC236'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">sscanf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC237'><br/></div><div class='line' id='LC238'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">!=</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC239'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC240'><br/></div><div class='line' id='LC241'>	<span class="cm">/* already using this value, bail out */</span></div><div class='line' id='LC242'>	<span class="k">if</span> <span class="p">(</span><span class="n">input</span> <span class="o">==</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_in_sampling_periods</span><span class="p">)</span></div><div class='line' id='LC243'>		<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC244'><br/></div><div class='line' id='LC245'>	<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC246'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC247'>	<span class="n">max_windows</span> <span class="o">=</span> <span class="n">max</span><span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_in_sampling_periods</span><span class="p">,</span></div><div class='line' id='LC248'>			<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_out_sampling_periods</span><span class="p">);</span></div><div class='line' id='LC249'><br/></div><div class='line' id='LC250'>	<span class="cm">/* no need to resize array */</span></div><div class='line' id='LC251'>	<span class="k">if</span> <span class="p">(</span><span class="n">input</span> <span class="o">&lt;=</span> <span class="n">max_windows</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC252'>		<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_in_sampling_periods</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC253'>		<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC254'>	<span class="p">}</span></div><div class='line' id='LC255'><br/></div><div class='line' id='LC256'>	<span class="cm">/* resize array */</span></div><div class='line' id='LC257'>	<span class="n">temp</span> <span class="o">=</span> <span class="n">kmalloc</span><span class="p">((</span><span class="k">sizeof</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)</span> <span class="o">*</span> <span class="n">input</span><span class="p">),</span> <span class="n">GFP_KERNEL</span><span class="p">);</span></div><div class='line' id='LC258'><br/></div><div class='line' id='LC259'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">temp</span> <span class="o">||</span> <span class="n">IS_ERR</span><span class="p">(</span><span class="n">temp</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC260'>		<span class="n">ret</span> <span class="o">=</span> <span class="o">-</span><span class="n">ENOMEM</span><span class="p">;</span></div><div class='line' id='LC261'>		<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC262'>	<span class="p">}</span></div><div class='line' id='LC263'><br/></div><div class='line' id='LC264'>	<span class="n">memcpy</span><span class="p">(</span><span class="n">temp</span><span class="p">,</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span><span class="p">,</span></div><div class='line' id='LC265'>			<span class="p">(</span><span class="n">max_windows</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)));</span></div><div class='line' id='LC266'>	<span class="n">kfree</span><span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span><span class="p">);</span></div><div class='line' id='LC267'><br/></div><div class='line' id='LC268'>	<span class="cm">/* replace old buffer, old number of sampling periods &amp; old index */</span></div><div class='line' id='LC269'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span> <span class="o">=</span> <span class="n">temp</span><span class="p">;</span></div><div class='line' id='LC270'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_in_sampling_periods</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC271'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_index</span> <span class="o">=</span> <span class="n">max_windows</span><span class="p">;</span></div><div class='line' id='LC272'><span class="nl">out:</span></div><div class='line' id='LC273'>	<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC274'><br/></div><div class='line' id='LC275'>	<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC276'><span class="p">}</span></div><div class='line' id='LC277'><br/></div><div class='line' id='LC278'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_hotplug_out_sampling_periods</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">a</span><span class="p">,</span></div><div class='line' id='LC279'>		<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">b</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC280'><span class="p">{</span></div><div class='line' id='LC281'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC282'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="o">*</span><span class="n">temp</span><span class="p">;</span></div><div class='line' id='LC283'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">max_windows</span><span class="p">;</span></div><div class='line' id='LC284'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC285'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">sscanf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC286'><br/></div><div class='line' id='LC287'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">!=</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC288'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC289'><br/></div><div class='line' id='LC290'>	<span class="cm">/* already using this value, bail out */</span></div><div class='line' id='LC291'>	<span class="k">if</span> <span class="p">(</span><span class="n">input</span> <span class="o">==</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_out_sampling_periods</span><span class="p">)</span></div><div class='line' id='LC292'>		<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC293'><br/></div><div class='line' id='LC294'>	<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC295'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC296'>	<span class="n">max_windows</span> <span class="o">=</span> <span class="n">max</span><span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_in_sampling_periods</span><span class="p">,</span></div><div class='line' id='LC297'>			<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_out_sampling_periods</span><span class="p">);</span></div><div class='line' id='LC298'><br/></div><div class='line' id='LC299'>	<span class="cm">/* no need to resize array */</span></div><div class='line' id='LC300'>	<span class="k">if</span> <span class="p">(</span><span class="n">input</span> <span class="o">&lt;=</span> <span class="n">max_windows</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC301'>		<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_out_sampling_periods</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC302'>		<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC303'>	<span class="p">}</span></div><div class='line' id='LC304'><br/></div><div class='line' id='LC305'>	<span class="cm">/* resize array */</span></div><div class='line' id='LC306'>	<span class="n">temp</span> <span class="o">=</span> <span class="n">kmalloc</span><span class="p">((</span><span class="k">sizeof</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)</span> <span class="o">*</span> <span class="n">input</span><span class="p">),</span> <span class="n">GFP_KERNEL</span><span class="p">);</span></div><div class='line' id='LC307'><br/></div><div class='line' id='LC308'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">temp</span> <span class="o">||</span> <span class="n">IS_ERR</span><span class="p">(</span><span class="n">temp</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC309'>		<span class="n">ret</span> <span class="o">=</span> <span class="o">-</span><span class="n">ENOMEM</span><span class="p">;</span></div><div class='line' id='LC310'>		<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC311'>	<span class="p">}</span></div><div class='line' id='LC312'><br/></div><div class='line' id='LC313'>	<span class="n">memcpy</span><span class="p">(</span><span class="n">temp</span><span class="p">,</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span><span class="p">,</span></div><div class='line' id='LC314'>			<span class="p">(</span><span class="n">max_windows</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)));</span></div><div class='line' id='LC315'>	<span class="n">kfree</span><span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span><span class="p">);</span></div><div class='line' id='LC316'><br/></div><div class='line' id='LC317'>	<span class="cm">/* replace old buffer, old number of sampling periods &amp; old index */</span></div><div class='line' id='LC318'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span> <span class="o">=</span> <span class="n">temp</span><span class="p">;</span></div><div class='line' id='LC319'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_out_sampling_periods</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC320'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_index</span> <span class="o">=</span> <span class="n">max_windows</span><span class="p">;</span></div><div class='line' id='LC321'><span class="nl">out:</span></div><div class='line' id='LC322'>	<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC323'><br/></div><div class='line' id='LC324'>	<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC325'><span class="p">}</span></div><div class='line' id='LC326'><br/></div><div class='line' id='LC327'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_ignore_nice_load</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">a</span><span class="p">,</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">b</span><span class="p">,</span></div><div class='line' id='LC328'>				      <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC329'><span class="p">{</span></div><div class='line' id='LC330'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC331'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC332'><br/></div><div class='line' id='LC333'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">j</span><span class="p">;</span></div><div class='line' id='LC334'><br/></div><div class='line' id='LC335'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">sscanf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC336'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">!=</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC337'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC338'><br/></div><div class='line' id='LC339'>	<span class="k">if</span> <span class="p">(</span><span class="n">input</span> <span class="o">&gt;</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC340'>		<span class="n">input</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC341'><br/></div><div class='line' id='LC342'>	<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC343'>	<span class="k">if</span> <span class="p">(</span><span class="n">input</span> <span class="o">==</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">ignore_nice</span><span class="p">)</span> <span class="p">{</span> <span class="cm">/* nothing to do */</span></div><div class='line' id='LC344'>		<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC345'>		<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC346'>	<span class="p">}</span></div><div class='line' id='LC347'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">ignore_nice</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC348'><br/></div><div class='line' id='LC349'>	<span class="cm">/* we need to re-evaluate prev_cpu_idle */</span></div><div class='line' id='LC350'>	<span class="n">for_each_online_cpu</span><span class="p">(</span><span class="n">j</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC351'>		<span class="k">struct</span> <span class="n">cpu_dbs_info_s</span> <span class="o">*</span><span class="n">dbs_info</span><span class="p">;</span></div><div class='line' id='LC352'>		<span class="n">dbs_info</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">hp_cpu_dbs_info</span><span class="p">,</span> <span class="n">j</span><span class="p">);</span></div><div class='line' id='LC353'>		<span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">prev_cpu_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time</span><span class="p">(</span><span class="n">j</span><span class="p">,</span></div><div class='line' id='LC354'>						<span class="o">&amp;</span><span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">prev_cpu_wall</span><span class="p">);</span></div><div class='line' id='LC355'>		<span class="k">if</span> <span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">ignore_nice</span><span class="p">)</span></div><div class='line' id='LC356'>			<span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">prev_cpu_nice</span> <span class="o">=</span> <span class="n">kstat_cpu</span><span class="p">(</span><span class="n">j</span><span class="p">).</span><span class="n">cpustat</span><span class="p">.</span><span class="n">nice</span><span class="p">;</span></div><div class='line' id='LC357'><br/></div><div class='line' id='LC358'>	<span class="p">}</span></div><div class='line' id='LC359'>	<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC360'><br/></div><div class='line' id='LC361'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC362'><span class="p">}</span></div><div class='line' id='LC363'><br/></div><div class='line' id='LC364'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_io_is_busy</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">a</span><span class="p">,</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">b</span><span class="p">,</span></div><div class='line' id='LC365'>				   <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC366'><span class="p">{</span></div><div class='line' id='LC367'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC368'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC369'><br/></div><div class='line' id='LC370'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">sscanf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">input</span><span class="p">);</span></div><div class='line' id='LC371'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">!=</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC372'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC373'><br/></div><div class='line' id='LC374'>	<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC375'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">io_is_busy</span> <span class="o">=</span> <span class="o">!!</span><span class="n">input</span><span class="p">;</span></div><div class='line' id='LC376'>	<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC377'><br/></div><div class='line' id='LC378'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC379'><span class="p">}</span></div><div class='line' id='LC380'><br/></div><div class='line' id='LC381'><span class="n">define_one_global_rw</span><span class="p">(</span><span class="n">sampling_rate</span><span class="p">);</span></div><div class='line' id='LC382'><span class="n">define_one_global_rw</span><span class="p">(</span><span class="n">up_threshold</span><span class="p">);</span></div><div class='line' id='LC383'><span class="n">define_one_global_rw</span><span class="p">(</span><span class="n">down_differential</span><span class="p">);</span></div><div class='line' id='LC384'><span class="n">define_one_global_rw</span><span class="p">(</span><span class="n">down_threshold</span><span class="p">);</span></div><div class='line' id='LC385'><span class="n">define_one_global_rw</span><span class="p">(</span><span class="n">hotplug_in_sampling_periods</span><span class="p">);</span></div><div class='line' id='LC386'><span class="n">define_one_global_rw</span><span class="p">(</span><span class="n">hotplug_out_sampling_periods</span><span class="p">);</span></div><div class='line' id='LC387'><span class="n">define_one_global_rw</span><span class="p">(</span><span class="n">ignore_nice_load</span><span class="p">);</span></div><div class='line' id='LC388'><span class="n">define_one_global_rw</span><span class="p">(</span><span class="n">io_is_busy</span><span class="p">);</span></div><div class='line' id='LC389'><br/></div><div class='line' id='LC390'><span class="k">static</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">dbs_attributes</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC391'>	<span class="o">&amp;</span><span class="n">sampling_rate</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC392'>	<span class="o">&amp;</span><span class="n">up_threshold</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC393'>	<span class="o">&amp;</span><span class="n">down_differential</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC394'>	<span class="o">&amp;</span><span class="n">down_threshold</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC395'>	<span class="o">&amp;</span><span class="n">hotplug_in_sampling_periods</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC396'>	<span class="o">&amp;</span><span class="n">hotplug_out_sampling_periods</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC397'>	<span class="o">&amp;</span><span class="n">ignore_nice_load</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC398'>	<span class="o">&amp;</span><span class="n">io_is_busy</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC399'>	<span class="nb">NULL</span></div><div class='line' id='LC400'><span class="p">};</span></div><div class='line' id='LC401'><br/></div><div class='line' id='LC402'><span class="k">static</span> <span class="k">struct</span> <span class="n">attribute_group</span> <span class="n">dbs_attr_group</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC403'>	<span class="p">.</span><span class="n">attrs</span> <span class="o">=</span> <span class="n">dbs_attributes</span><span class="p">,</span></div><div class='line' id='LC404'>	<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="s">&quot;hotplug&quot;</span><span class="p">,</span></div><div class='line' id='LC405'><span class="p">};</span></div><div class='line' id='LC406'><br/></div><div class='line' id='LC407'><span class="cm">/************************** sysfs end ************************/</span></div><div class='line' id='LC408'><br/></div><div class='line' id='LC409'><span class="k">static</span> <span class="kt">void</span> <span class="nf">dbs_check_cpu</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpu_dbs_info_s</span> <span class="o">*</span><span class="n">this_dbs_info</span><span class="p">)</span></div><div class='line' id='LC410'><span class="p">{</span></div><div class='line' id='LC411'>	<span class="cm">/* combined load of all enabled CPUs */</span></div><div class='line' id='LC412'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">total_load</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC413'>	<span class="cm">/* single largest CPU load percentage*/</span></div><div class='line' id='LC414'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">max_load</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC415'>	<span class="cm">/* largest CPU load in terms of frequency */</span></div><div class='line' id='LC416'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">max_load_freq</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC417'>	<span class="cm">/* average load across all enabled CPUs */</span></div><div class='line' id='LC418'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">avg_load</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC419'>	<span class="cm">/* average load across multiple sampling periods for hotplug events */</span></div><div class='line' id='LC420'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">hotplug_in_avg_load</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC421'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">hotplug_out_avg_load</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC422'>	<span class="cm">/* number of sampling periods averaged for hotplug decisions */</span></div><div class='line' id='LC423'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">periods</span><span class="p">;</span></div><div class='line' id='LC424'><br/></div><div class='line' id='LC425'>	<span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">;</span></div><div class='line' id='LC426'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">i</span><span class="p">,</span> <span class="n">j</span><span class="p">;</span></div><div class='line' id='LC427'><br/></div><div class='line' id='LC428'>	<span class="n">policy</span> <span class="o">=</span> <span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">cur_policy</span><span class="p">;</span></div><div class='line' id='LC429'><br/></div><div class='line' id='LC430'>	<span class="cm">/*</span></div><div class='line' id='LC431'><span class="cm">	 * cpu load accounting</span></div><div class='line' id='LC432'><span class="cm">	 * get highest load, total load and average load across all CPUs</span></div><div class='line' id='LC433'><span class="cm">	 */</span></div><div class='line' id='LC434'>	<span class="n">for_each_cpu</span><span class="p">(</span><span class="n">j</span><span class="p">,</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpus</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC435'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">load</span><span class="p">;</span></div><div class='line' id='LC436'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">idle_time</span><span class="p">,</span> <span class="n">wall_time</span><span class="p">;</span></div><div class='line' id='LC437'>		<span class="kt">cputime64_t</span> <span class="n">cur_wall_time</span><span class="p">,</span> <span class="n">cur_idle_time</span><span class="p">;</span></div><div class='line' id='LC438'>		<span class="k">struct</span> <span class="n">cpu_dbs_info_s</span> <span class="o">*</span><span class="n">j_dbs_info</span><span class="p">;</span></div><div class='line' id='LC439'><br/></div><div class='line' id='LC440'>		<span class="n">j_dbs_info</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">hp_cpu_dbs_info</span><span class="p">,</span> <span class="n">j</span><span class="p">);</span></div><div class='line' id='LC441'><br/></div><div class='line' id='LC442'>		<span class="cm">/* update both cur_idle_time and cur_wall_time */</span></div><div class='line' id='LC443'>		<span class="n">cur_idle_time</span> <span class="o">=</span> <span class="n">get_cpu_idle_time</span><span class="p">(</span><span class="n">j</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">cur_wall_time</span><span class="p">);</span></div><div class='line' id='LC444'><br/></div><div class='line' id='LC445'>		<span class="cm">/* how much wall time has passed since last iteration? */</span></div><div class='line' id='LC446'>		<span class="n">wall_time</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)</span> <span class="n">cputime64_sub</span><span class="p">(</span><span class="n">cur_wall_time</span><span class="p">,</span></div><div class='line' id='LC447'>				<span class="n">j_dbs_info</span><span class="o">-&gt;</span><span class="n">prev_cpu_wall</span><span class="p">);</span></div><div class='line' id='LC448'>		<span class="n">j_dbs_info</span><span class="o">-&gt;</span><span class="n">prev_cpu_wall</span> <span class="o">=</span> <span class="n">cur_wall_time</span><span class="p">;</span></div><div class='line' id='LC449'><br/></div><div class='line' id='LC450'>		<span class="cm">/* how much idle time has passed since last iteration? */</span></div><div class='line' id='LC451'>		<span class="n">idle_time</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)</span> <span class="n">cputime64_sub</span><span class="p">(</span><span class="n">cur_idle_time</span><span class="p">,</span></div><div class='line' id='LC452'>				<span class="n">j_dbs_info</span><span class="o">-&gt;</span><span class="n">prev_cpu_idle</span><span class="p">);</span></div><div class='line' id='LC453'>		<span class="n">j_dbs_info</span><span class="o">-&gt;</span><span class="n">prev_cpu_idle</span> <span class="o">=</span> <span class="n">cur_idle_time</span><span class="p">;</span></div><div class='line' id='LC454'><br/></div><div class='line' id='LC455'>		<span class="k">if</span> <span class="p">(</span><span class="n">unlikely</span><span class="p">(</span><span class="o">!</span><span class="n">wall_time</span> <span class="o">||</span> <span class="n">wall_time</span> <span class="o">&lt;</span> <span class="n">idle_time</span><span class="p">))</span></div><div class='line' id='LC456'>			<span class="k">continue</span><span class="p">;</span></div><div class='line' id='LC457'><br/></div><div class='line' id='LC458'>		<span class="cm">/* load is the percentage of time not spent in idle */</span></div><div class='line' id='LC459'>		<span class="n">load</span> <span class="o">=</span> <span class="mi">100</span> <span class="o">*</span> <span class="p">(</span><span class="n">wall_time</span> <span class="o">-</span> <span class="n">idle_time</span><span class="p">)</span> <span class="o">/</span> <span class="n">wall_time</span><span class="p">;</span></div><div class='line' id='LC460'><br/></div><div class='line' id='LC461'>		<span class="cm">/* keep track of combined load across all CPUs */</span></div><div class='line' id='LC462'>		<span class="n">total_load</span> <span class="o">+=</span> <span class="n">load</span><span class="p">;</span></div><div class='line' id='LC463'><br/></div><div class='line' id='LC464'>		<span class="cm">/* keep track of highest single load across all CPUs */</span></div><div class='line' id='LC465'>		<span class="k">if</span> <span class="p">(</span><span class="n">load</span> <span class="o">&gt;</span> <span class="n">max_load</span><span class="p">)</span></div><div class='line' id='LC466'>			<span class="n">max_load</span> <span class="o">=</span> <span class="n">load</span><span class="p">;</span></div><div class='line' id='LC467'>	<span class="p">}</span></div><div class='line' id='LC468'><br/></div><div class='line' id='LC469'>	<span class="cm">/* use the max load in the OPP freq change policy */</span></div><div class='line' id='LC470'>	<span class="n">max_load_freq</span> <span class="o">=</span> <span class="n">max_load</span> <span class="o">*</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">;</span></div><div class='line' id='LC471'><br/></div><div class='line' id='LC472'>	<span class="cm">/* calculate the average load across all related CPUs */</span></div><div class='line' id='LC473'>	<span class="n">avg_load</span> <span class="o">=</span> <span class="n">total_load</span> <span class="o">/</span> <span class="n">num_online_cpus</span><span class="p">();</span></div><div class='line' id='LC474'><br/></div><div class='line' id='LC475'><br/></div><div class='line' id='LC476'>	<span class="cm">/*</span></div><div class='line' id='LC477'><span class="cm">	 * hotplug load accounting</span></div><div class='line' id='LC478'><span class="cm">	 * average load over multiple sampling periods</span></div><div class='line' id='LC479'><span class="cm">	 */</span></div><div class='line' id='LC480'><br/></div><div class='line' id='LC481'>	<span class="cm">/* how many sampling periods do we use for hotplug decisions? */</span></div><div class='line' id='LC482'>	<span class="n">periods</span> <span class="o">=</span> <span class="n">max</span><span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_in_sampling_periods</span><span class="p">,</span></div><div class='line' id='LC483'>			<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_out_sampling_periods</span><span class="p">);</span></div><div class='line' id='LC484'><br/></div><div class='line' id='LC485'>	<span class="cm">/* store avg_load in the circular buffer */</span></div><div class='line' id='LC486'>	<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span><span class="p">[</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_index</span><span class="p">]</span></div><div class='line' id='LC487'>		<span class="o">=</span> <span class="n">avg_load</span><span class="p">;</span></div><div class='line' id='LC488'><br/></div><div class='line' id='LC489'>	<span class="cm">/* compute average load across in &amp; out sampling periods */</span></div><div class='line' id='LC490'>	<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">j</span> <span class="o">=</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_index</span><span class="p">;</span></div><div class='line' id='LC491'>			<span class="n">i</span> <span class="o">&lt;</span> <span class="n">periods</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">,</span> <span class="n">j</span><span class="o">--</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC492'>		<span class="k">if</span> <span class="p">(</span><span class="n">i</span> <span class="o">&lt;</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_in_sampling_periods</span><span class="p">)</span></div><div class='line' id='LC493'>			<span class="n">hotplug_in_avg_load</span> <span class="o">+=</span></div><div class='line' id='LC494'>				<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span><span class="p">[</span><span class="n">j</span><span class="p">];</span></div><div class='line' id='LC495'>		<span class="k">if</span> <span class="p">(</span><span class="n">i</span> <span class="o">&lt;</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_out_sampling_periods</span><span class="p">)</span></div><div class='line' id='LC496'>			<span class="n">hotplug_out_avg_load</span> <span class="o">+=</span></div><div class='line' id='LC497'>				<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span><span class="p">[</span><span class="n">j</span><span class="p">];</span></div><div class='line' id='LC498'><br/></div><div class='line' id='LC499'>		<span class="k">if</span> <span class="p">(</span><span class="n">j</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC500'>			<span class="n">j</span> <span class="o">=</span> <span class="n">periods</span><span class="p">;</span></div><div class='line' id='LC501'>	<span class="p">}</span></div><div class='line' id='LC502'><br/></div><div class='line' id='LC503'>	<span class="n">hotplug_in_avg_load</span> <span class="o">=</span> <span class="n">hotplug_in_avg_load</span> <span class="o">/</span></div><div class='line' id='LC504'>		<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_in_sampling_periods</span><span class="p">;</span></div><div class='line' id='LC505'><br/></div><div class='line' id='LC506'>	<span class="n">hotplug_out_avg_load</span> <span class="o">=</span> <span class="n">hotplug_out_avg_load</span> <span class="o">/</span></div><div class='line' id='LC507'>		<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_out_sampling_periods</span><span class="p">;</span></div><div class='line' id='LC508'><br/></div><div class='line' id='LC509'>	<span class="cm">/* return to first element if we&#39;re at the circular buffer&#39;s end */</span></div><div class='line' id='LC510'>	<span class="k">if</span> <span class="p">(</span><span class="o">++</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_index</span> <span class="o">==</span> <span class="n">periods</span><span class="p">)</span></div><div class='line' id='LC511'>		<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_index</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC512'><br/></div><div class='line' id='LC513'>	<span class="cm">/* check if auxiliary CPU is needed based on avg_load */</span></div><div class='line' id='LC514'>	<span class="k">if</span> <span class="p">(</span><span class="n">avg_load</span> <span class="o">&gt;</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">up_threshold</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC515'>		<span class="cm">/* should we enable auxillary CPUs? */</span></div><div class='line' id='LC516'>		<span class="k">if</span> <span class="p">(</span><span class="n">num_online_cpus</span><span class="p">()</span> <span class="o">&lt;</span> <span class="mi">2</span> <span class="o">&amp;&amp;</span> <span class="n">hotplug_in_avg_load</span> <span class="o">&gt;</span></div><div class='line' id='LC517'>				<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">up_threshold</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC518'>			<span class="cm">/* hotplug with cpufreq is nasty</span></div><div class='line' id='LC519'><span class="cm">			 * a call to cpufreq_governor_dbs may cause a lockup.</span></div><div class='line' id='LC520'><span class="cm">			 * wq is not running here so its safe.</span></div><div class='line' id='LC521'><span class="cm">			 */</span></div><div class='line' id='LC522'>			<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">timer_mutex</span><span class="p">);</span></div><div class='line' id='LC523'>			<span class="n">cpu_up</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC524'>			<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">timer_mutex</span><span class="p">);</span></div><div class='line' id='LC525'>			<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC526'>		<span class="p">}</span></div><div class='line' id='LC527'>	<span class="p">}</span></div><div class='line' id='LC528'><br/></div><div class='line' id='LC529'>	<span class="cm">/* check for frequency increase based on max_load */</span></div><div class='line' id='LC530'>	<span class="k">if</span> <span class="p">(</span><span class="n">max_load</span> <span class="o">&gt;</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">up_threshold</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC531'>		<span class="cm">/* increase to highest frequency supported */</span></div><div class='line' id='LC532'>		<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">&lt;</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">)</span></div><div class='line' id='LC533'>			<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">,</span></div><div class='line' id='LC534'>					<span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC535'><br/></div><div class='line' id='LC536'>		<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC537'>	<span class="p">}</span></div><div class='line' id='LC538'><br/></div><div class='line' id='LC539'>	<span class="cm">/* check for frequency decrease */</span></div><div class='line' id='LC540'>	<span class="k">if</span> <span class="p">(</span><span class="n">avg_load</span> <span class="o">&lt;</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">down_threshold</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC541'>		<span class="cm">/* are we at the minimum frequency already? */</span></div><div class='line' id='LC542'>		<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">==</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC543'>			<span class="cm">/* should we disable auxillary CPUs? */</span></div><div class='line' id='LC544'>			<span class="k">if</span> <span class="p">(</span><span class="n">num_online_cpus</span><span class="p">()</span> <span class="o">&gt;</span> <span class="mi">1</span> <span class="o">&amp;&amp;</span> <span class="n">hotplug_out_avg_load</span> <span class="o">&lt;</span></div><div class='line' id='LC545'>					<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">down_threshold</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC546'>				<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">timer_mutex</span><span class="p">);</span></div><div class='line' id='LC547'>				<span class="n">cpu_down</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC548'>				<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">timer_mutex</span><span class="p">);</span></div><div class='line' id='LC549'>			<span class="p">}</span></div><div class='line' id='LC550'>			<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC551'>		<span class="p">}</span></div><div class='line' id='LC552'>	<span class="p">}</span></div><div class='line' id='LC553'><br/></div><div class='line' id='LC554'>	<span class="cm">/*</span></div><div class='line' id='LC555'><span class="cm">	 * go down to the lowest frequency which can sustain the load by</span></div><div class='line' id='LC556'><span class="cm">	 * keeping 30% of idle in order to not cross the up_threshold</span></div><div class='line' id='LC557'><span class="cm">	 */</span></div><div class='line' id='LC558'>	<span class="k">if</span> <span class="p">((</span><span class="n">max_load_freq</span> <span class="o">&lt;</span></div><div class='line' id='LC559'>	    <span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">up_threshold</span> <span class="o">-</span> <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">down_differential</span><span class="p">)</span> <span class="o">*</span></div><div class='line' id='LC560'>	     <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span> <span class="o">&amp;&amp;</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">&gt;</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC561'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">freq_next</span><span class="p">;</span></div><div class='line' id='LC562'>		<span class="n">freq_next</span> <span class="o">=</span> <span class="n">max_load_freq</span> <span class="o">/</span></div><div class='line' id='LC563'>				<span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">up_threshold</span> <span class="o">-</span></div><div class='line' id='LC564'>				 <span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">down_differential</span><span class="p">);</span></div><div class='line' id='LC565'><br/></div><div class='line' id='LC566'>		<span class="k">if</span> <span class="p">(</span><span class="n">freq_next</span> <span class="o">&lt;</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">)</span></div><div class='line' id='LC567'>			<span class="n">freq_next</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">;</span></div><div class='line' id='LC568'><br/></div><div class='line' id='LC569'>		 <span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span> <span class="n">freq_next</span><span class="p">,</span></div><div class='line' id='LC570'>					 <span class="n">CPUFREQ_RELATION_L</span><span class="p">);</span></div><div class='line' id='LC571'>	<span class="p">}</span></div><div class='line' id='LC572'><span class="nl">out:</span></div><div class='line' id='LC573'>	<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC574'><span class="p">}</span></div><div class='line' id='LC575'><br/></div><div class='line' id='LC576'><span class="k">static</span> <span class="kt">void</span> <span class="nf">do_dbs_timer</span><span class="p">(</span><span class="k">struct</span> <span class="n">work_struct</span> <span class="o">*</span><span class="n">work</span><span class="p">)</span></div><div class='line' id='LC577'><span class="p">{</span></div><div class='line' id='LC578'>	<span class="k">struct</span> <span class="n">cpu_dbs_info_s</span> <span class="o">*</span><span class="n">dbs_info</span> <span class="o">=</span></div><div class='line' id='LC579'>		<span class="n">container_of</span><span class="p">(</span><span class="n">work</span><span class="p">,</span> <span class="k">struct</span> <span class="n">cpu_dbs_info_s</span><span class="p">,</span> <span class="n">work</span><span class="p">.</span><span class="n">work</span><span class="p">);</span></div><div class='line' id='LC580'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span> <span class="o">=</span> <span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">cpu</span><span class="p">;</span></div><div class='line' id='LC581'><br/></div><div class='line' id='LC582'>	<span class="cm">/* We want all related CPUs to do sampling nearly on same jiffy */</span></div><div class='line' id='LC583'>	<span class="kt">int</span> <span class="n">delay</span> <span class="o">=</span> <span class="n">usecs_to_jiffies</span><span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">sampling_rate</span><span class="p">);</span></div><div class='line' id='LC584'><br/></div><div class='line' id='LC585'>	<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">timer_mutex</span><span class="p">);</span></div><div class='line' id='LC586'>	<span class="n">dbs_check_cpu</span><span class="p">(</span><span class="n">dbs_info</span><span class="p">);</span></div><div class='line' id='LC587'>	<span class="n">queue_delayed_work_on</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="n">khotplug_wq</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">work</span><span class="p">,</span> <span class="n">delay</span><span class="p">);</span></div><div class='line' id='LC588'>	<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">timer_mutex</span><span class="p">);</span></div><div class='line' id='LC589'><span class="p">}</span></div><div class='line' id='LC590'><br/></div><div class='line' id='LC591'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">dbs_timer_init</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpu_dbs_info_s</span> <span class="o">*</span><span class="n">dbs_info</span><span class="p">)</span></div><div class='line' id='LC592'><span class="p">{</span></div><div class='line' id='LC593'>	<span class="cm">/* We want all related CPUs to do sampling nearly on same jiffy */</span></div><div class='line' id='LC594'>	<span class="kt">int</span> <span class="n">delay</span> <span class="o">=</span> <span class="n">usecs_to_jiffies</span><span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">sampling_rate</span><span class="p">);</span></div><div class='line' id='LC595'>	<span class="n">delay</span> <span class="o">-=</span> <span class="n">jiffies</span> <span class="o">%</span> <span class="n">delay</span><span class="p">;</span></div><div class='line' id='LC596'><br/></div><div class='line' id='LC597'>	<span class="n">INIT_DELAYED_WORK_DEFERRABLE</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">work</span><span class="p">,</span> <span class="n">do_dbs_timer</span><span class="p">);</span></div><div class='line' id='LC598'>	<span class="n">queue_delayed_work_on</span><span class="p">(</span><span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">cpu</span><span class="p">,</span> <span class="n">khotplug_wq</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">work</span><span class="p">,</span></div><div class='line' id='LC599'>		<span class="n">delay</span><span class="p">);</span></div><div class='line' id='LC600'><span class="p">}</span></div><div class='line' id='LC601'><br/></div><div class='line' id='LC602'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">dbs_timer_exit</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpu_dbs_info_s</span> <span class="o">*</span><span class="n">dbs_info</span><span class="p">)</span></div><div class='line' id='LC603'><span class="p">{</span></div><div class='line' id='LC604'>	<span class="n">cancel_delayed_work_sync</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_info</span><span class="o">-&gt;</span><span class="n">work</span><span class="p">);</span></div><div class='line' id='LC605'><span class="p">}</span></div><div class='line' id='LC606'><br/></div><div class='line' id='LC607'><span class="k">static</span> <span class="kt">int</span> <span class="nf">cpufreq_governor_dbs</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span></div><div class='line' id='LC608'>				   <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">event</span><span class="p">)</span></div><div class='line' id='LC609'><span class="p">{</span></div><div class='line' id='LC610'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpu</span><span class="p">;</span></div><div class='line' id='LC611'>	<span class="k">struct</span> <span class="n">cpu_dbs_info_s</span> <span class="o">*</span><span class="n">this_dbs_info</span><span class="p">;</span></div><div class='line' id='LC612'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">i</span><span class="p">,</span> <span class="n">j</span><span class="p">,</span> <span class="n">max_periods</span><span class="p">;</span></div><div class='line' id='LC613'>	<span class="kt">int</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC614'><br/></div><div class='line' id='LC615'>	<span class="n">this_dbs_info</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">hp_cpu_dbs_info</span><span class="p">,</span> <span class="n">cpu</span><span class="p">);</span></div><div class='line' id='LC616'><br/></div><div class='line' id='LC617'>	<span class="k">switch</span> <span class="p">(</span><span class="n">event</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC618'>	<span class="k">case</span> <span class="n">CPUFREQ_GOV_START</span>:</div><div class='line' id='LC619'>		<span class="k">if</span> <span class="p">((</span><span class="o">!</span><span class="n">cpu_online</span><span class="p">(</span><span class="n">cpu</span><span class="p">))</span> <span class="o">||</span> <span class="p">(</span><span class="o">!</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">))</span></div><div class='line' id='LC620'>			<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC621'><br/></div><div class='line' id='LC622'>		<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC623'>		<span class="n">dbs_enable</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC624'>		<span class="n">for_each_cpu</span><span class="p">(</span><span class="n">j</span><span class="p">,</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpus</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC625'>			<span class="k">struct</span> <span class="n">cpu_dbs_info_s</span> <span class="o">*</span><span class="n">j_dbs_info</span><span class="p">;</span></div><div class='line' id='LC626'>			<span class="n">j_dbs_info</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">hp_cpu_dbs_info</span><span class="p">,</span> <span class="n">j</span><span class="p">);</span></div><div class='line' id='LC627'>			<span class="n">j_dbs_info</span><span class="o">-&gt;</span><span class="n">cur_policy</span> <span class="o">=</span> <span class="n">policy</span><span class="p">;</span></div><div class='line' id='LC628'><br/></div><div class='line' id='LC629'>			<span class="n">j_dbs_info</span><span class="o">-&gt;</span><span class="n">prev_cpu_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time</span><span class="p">(</span><span class="n">j</span><span class="p">,</span></div><div class='line' id='LC630'>						<span class="o">&amp;</span><span class="n">j_dbs_info</span><span class="o">-&gt;</span><span class="n">prev_cpu_wall</span><span class="p">);</span></div><div class='line' id='LC631'>			<span class="k">if</span> <span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">ignore_nice</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC632'>				<span class="n">j_dbs_info</span><span class="o">-&gt;</span><span class="n">prev_cpu_nice</span> <span class="o">=</span></div><div class='line' id='LC633'>						<span class="n">kstat_cpu</span><span class="p">(</span><span class="n">j</span><span class="p">).</span><span class="n">cpustat</span><span class="p">.</span><span class="n">nice</span><span class="p">;</span></div><div class='line' id='LC634'>			<span class="p">}</span></div><div class='line' id='LC635'><br/></div><div class='line' id='LC636'>			<span class="n">max_periods</span> <span class="o">=</span> <span class="n">max</span><span class="p">(</span><span class="n">DEFAULT_HOTPLUG_IN_SAMPLING_PERIODS</span><span class="p">,</span></div><div class='line' id='LC637'>					<span class="n">DEFAULT_HOTPLUG_OUT_SAMPLING_PERIODS</span><span class="p">);</span></div><div class='line' id='LC638'>			<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span> <span class="o">=</span> <span class="n">kmalloc</span><span class="p">(</span></div><div class='line' id='LC639'>					<span class="p">(</span><span class="k">sizeof</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)</span> <span class="o">*</span> <span class="n">max_periods</span><span class="p">),</span></div><div class='line' id='LC640'>					<span class="n">GFP_KERNEL</span><span class="p">);</span></div><div class='line' id='LC641'>			<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC642'>				<span class="n">WARN_ON</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC643'>				<span class="k">return</span> <span class="o">-</span><span class="n">ENOMEM</span><span class="p">;</span></div><div class='line' id='LC644'>			<span class="p">}</span></div><div class='line' id='LC645'>			<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">max_periods</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span></div><div class='line' id='LC646'>				<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="mi">50</span><span class="p">;</span></div><div class='line' id='LC647'>		<span class="p">}</span></div><div class='line' id='LC648'>		<span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">cpu</span> <span class="o">=</span> <span class="n">cpu</span><span class="p">;</span></div><div class='line' id='LC649'>		<span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">freq_table</span> <span class="o">=</span> <span class="n">cpufreq_frequency_get_table</span><span class="p">(</span><span class="n">cpu</span><span class="p">);</span></div><div class='line' id='LC650'>		<span class="cm">/*</span></div><div class='line' id='LC651'><span class="cm">		 * Start the timerschedule work, when this governor</span></div><div class='line' id='LC652'><span class="cm">		 * is used for first time</span></div><div class='line' id='LC653'><span class="cm">		 */</span></div><div class='line' id='LC654'>		<span class="k">if</span> <span class="p">(</span><span class="n">dbs_enable</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC655'>			<span class="n">rc</span> <span class="o">=</span> <span class="n">sysfs_create_group</span><span class="p">(</span><span class="n">cpufreq_global_kobject</span><span class="p">,</span></div><div class='line' id='LC656'>						<span class="o">&amp;</span><span class="n">dbs_attr_group</span><span class="p">);</span></div><div class='line' id='LC657'>			<span class="k">if</span> <span class="p">(</span><span class="n">rc</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC658'>				<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC659'>				<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC660'>			<span class="p">}</span></div><div class='line' id='LC661'>		<span class="p">}</span></div><div class='line' id='LC662'>		<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC663'><br/></div><div class='line' id='LC664'>		<span class="n">mutex_init</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">timer_mutex</span><span class="p">);</span></div><div class='line' id='LC665'>		<span class="n">dbs_timer_init</span><span class="p">(</span><span class="n">this_dbs_info</span><span class="p">);</span></div><div class='line' id='LC666'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC667'><br/></div><div class='line' id='LC668'>	<span class="k">case</span> <span class="n">CPUFREQ_GOV_STOP</span>:</div><div class='line' id='LC669'>		<span class="n">dbs_timer_exit</span><span class="p">(</span><span class="n">this_dbs_info</span><span class="p">);</span></div><div class='line' id='LC670'><br/></div><div class='line' id='LC671'>		<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC672'>		<span class="n">mutex_destroy</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">timer_mutex</span><span class="p">);</span></div><div class='line' id='LC673'>		<span class="n">dbs_enable</span><span class="o">--</span><span class="p">;</span></div><div class='line' id='LC674'>		<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">dbs_mutex</span><span class="p">);</span></div><div class='line' id='LC675'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">dbs_enable</span><span class="p">)</span></div><div class='line' id='LC676'>			<span class="n">sysfs_remove_group</span><span class="p">(</span><span class="n">cpufreq_global_kobject</span><span class="p">,</span></div><div class='line' id='LC677'>					   <span class="o">&amp;</span><span class="n">dbs_attr_group</span><span class="p">);</span></div><div class='line' id='LC678'>		<span class="n">kfree</span><span class="p">(</span><span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">hotplug_load_history</span><span class="p">);</span></div><div class='line' id='LC679'>		<span class="cm">/*</span></div><div class='line' id='LC680'><span class="cm">		 * XXX BIG CAVEAT: Stopping the governor with CPU1 offline</span></div><div class='line' id='LC681'><span class="cm">		 * will result in it remaining offline until the user onlines</span></div><div class='line' id='LC682'><span class="cm">		 * it again.  It is up to the user to do this (for now).</span></div><div class='line' id='LC683'><span class="cm">		 */</span></div><div class='line' id='LC684'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC685'><br/></div><div class='line' id='LC686'>	<span class="k">case</span> <span class="n">CPUFREQ_GOV_LIMITS</span>:</div><div class='line' id='LC687'>		<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">timer_mutex</span><span class="p">);</span></div><div class='line' id='LC688'>		<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span> <span class="o">&lt;</span> <span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">cur_policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span></div><div class='line' id='LC689'>			<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">cur_policy</span><span class="p">,</span></div><div class='line' id='LC690'>				<span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC691'>		<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span> <span class="o">&gt;</span> <span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">cur_policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span></div><div class='line' id='LC692'>			<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">cur_policy</span><span class="p">,</span></div><div class='line' id='LC693'>				<span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_L</span><span class="p">);</span></div><div class='line' id='LC694'>		<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">this_dbs_info</span><span class="o">-&gt;</span><span class="n">timer_mutex</span><span class="p">);</span></div><div class='line' id='LC695'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC696'>	<span class="p">}</span></div><div class='line' id='LC697'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC698'><span class="p">}</span></div><div class='line' id='LC699'><br/></div><div class='line' id='LC700'><span class="k">static</span> <span class="kt">int</span> <span class="n">__init</span> <span class="nf">cpufreq_gov_dbs_init</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC701'><span class="p">{</span></div><div class='line' id='LC702'>	<span class="kt">int</span> <span class="n">err</span><span class="p">;</span></div><div class='line' id='LC703'>	<span class="kt">cputime64_t</span> <span class="n">wall</span><span class="p">;</span></div><div class='line' id='LC704'>	<span class="n">u64</span> <span class="n">idle_time</span><span class="p">;</span></div><div class='line' id='LC705'>	<span class="kt">int</span> <span class="n">cpu</span> <span class="o">=</span> <span class="n">get_cpu</span><span class="p">();</span></div><div class='line' id='LC706'><br/></div><div class='line' id='LC707'>	<span class="n">idle_time</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_us</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">wall</span><span class="p">);</span></div><div class='line' id='LC708'>	<span class="n">put_cpu</span><span class="p">();</span></div><div class='line' id='LC709'>	<span class="k">if</span> <span class="p">(</span><span class="n">idle_time</span> <span class="o">!=</span> <span class="o">-</span><span class="mi">1ULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC710'>		<span class="n">dbs_tuners_ins</span><span class="p">.</span><span class="n">up_threshold</span> <span class="o">=</span> <span class="n">DEFAULT_UP_FREQ_MIN_LOAD</span><span class="p">;</span></div><div class='line' id='LC711'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC712'>		<span class="n">pr_err</span><span class="p">(</span><span class="s">&quot;cpufreq-hotplug: %s: assumes CONFIG_NO_HZ</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC713'>				<span class="n">__func__</span><span class="p">);</span></div><div class='line' id='LC714'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC715'>	<span class="p">}</span></div><div class='line' id='LC716'><br/></div><div class='line' id='LC717'>	<span class="n">khotplug_wq</span> <span class="o">=</span> <span class="n">create_workqueue</span><span class="p">(</span><span class="s">&quot;khotplug&quot;</span><span class="p">);</span></div><div class='line' id='LC718'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">khotplug_wq</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC719'>		<span class="n">pr_err</span><span class="p">(</span><span class="s">&quot;Creation of khotplug failed</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC720'>		<span class="k">return</span> <span class="o">-</span><span class="n">EFAULT</span><span class="p">;</span></div><div class='line' id='LC721'>	<span class="p">}</span></div><div class='line' id='LC722'>	<span class="n">err</span> <span class="o">=</span> <span class="n">cpufreq_register_governor</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_gov_hotplug</span><span class="p">);</span></div><div class='line' id='LC723'>	<span class="k">if</span> <span class="p">(</span><span class="n">err</span><span class="p">)</span></div><div class='line' id='LC724'>		<span class="n">destroy_workqueue</span><span class="p">(</span><span class="n">khotplug_wq</span><span class="p">);</span></div><div class='line' id='LC725'><br/></div><div class='line' id='LC726'>	<span class="k">return</span> <span class="n">err</span><span class="p">;</span></div><div class='line' id='LC727'><span class="p">}</span></div><div class='line' id='LC728'><br/></div><div class='line' id='LC729'><span class="k">static</span> <span class="kt">void</span> <span class="n">__exit</span> <span class="nf">cpufreq_gov_dbs_exit</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC730'><span class="p">{</span></div><div class='line' id='LC731'>	<span class="n">cpufreq_unregister_governor</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_gov_hotplug</span><span class="p">);</span></div><div class='line' id='LC732'>	<span class="n">destroy_workqueue</span><span class="p">(</span><span class="n">khotplug_wq</span><span class="p">);</span></div><div class='line' id='LC733'><span class="p">}</span></div><div class='line' id='LC734'><br/></div><div class='line' id='LC735'><span class="n">MODULE_AUTHOR</span><span class="p">(</span><span class="s">&quot;Mike Turquette &lt;mturquette@ti.com&gt;&quot;</span><span class="p">);</span></div><div class='line' id='LC736'><span class="n">MODULE_DESCRIPTION</span><span class="p">(</span><span class="s">&quot;&#39;cpufreq_hotplug&#39; - cpufreq governor for dynamic frequency scaling and CPU hotplugging&quot;</span><span class="p">);</span></div><div class='line' id='LC737'><span class="n">MODULE_LICENSE</span><span class="p">(</span><span class="s">&quot;GPL&quot;</span><span class="p">);</span></div><div class='line' id='LC738'><br/></div><div class='line' id='LC739'><span class="cp">#ifdef CONFIG_CPU_FREQ_DEFAULT_GOV_HOTPLUG</span></div><div class='line' id='LC740'><span class="n">fs_initcall</span><span class="p">(</span><span class="n">cpufreq_gov_dbs_init</span><span class="p">);</span></div><div class='line' id='LC741'><span class="cp">#else</span></div><div class='line' id='LC742'><span class="n">module_init</span><span class="p">(</span><span class="n">cpufreq_gov_dbs_init</span><span class="p">);</span></div><div class='line' id='LC743'><span class="cp">#endif</span></div><div class='line' id='LC744'><span class="n">module_exit</span><span class="p">(</span><span class="n">cpufreq_gov_dbs_exit</span><span class="p">);</span></div></pre></div></td>
          </tr>
        </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2014 <span title="0.13521s from github-fe119-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close js-ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>

  </body>
</html>

