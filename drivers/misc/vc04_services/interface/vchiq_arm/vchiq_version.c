#include "vchiq_build_info.h"
#include <linux/broadcom/vc_debug_sym.h>

VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_hostname, "android" );
<<<<<<< HEAD
VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_version, "9176fbbe14094ee7c321235f072f65baf4997402 (tainted)" );
=======
VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_version, "435927870243cab71e271d753f6da13776e200d2 (tainted)" );
>>>>>>> 687a35b... few files updated
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
