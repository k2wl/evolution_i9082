#include "vchiq_build_info.h"
#include <linux/broadcom/vc_debug_sym.h>

VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_hostname, "android" );
<<<<<<< HEAD
VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_version, "911f7e32804f66221d0a6efa37070b060bbebc18 (tainted)" );
=======
VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_version, "8a18c607895269b8ec53fc1c106e0e24e7cb3ab2 (tainted)" );
>>>>>>> parent of 06a24ae... updated to 3.0.34
VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_time,    __TIME__ );
VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_date,    __DATE__ );

const char *vchiq_get_build_hostname( void )
{
   return vchiq_build_hostname;
}

const char *vchiq_get_build_version( void )
{
   return vchiq_build_version;
}

const char *vchiq_get_build_date( void )
{
   return vchiq_build_date;
}

const char *vchiq_get_build_time( void )
{
   return vchiq_build_time;
}
