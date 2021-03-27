#include <barvinok/util.h>
#include "config.h"
#include "version.h"

const char *barvinok_version(void)
{
    return 
	GIT_HEAD_ID"\n"
#ifdef USE_INCREMENTAL_BF
	" INCREMENTAL=BF"
#elif defined USE_INCREMENTAL_DF
	" INCREMENTAL=DF"
#else
	" -INCREMENTAL"
#endif
    "\n"
#ifdef HAVE_PET
	" +PET"
#else
	" -PET"
#endif
#ifdef HAVE_OMEGA
	" +OMEGA"
#else
	" -OMEGA"
#endif
#ifdef HAVE_LIBCDDGMP
	" +CDDLIB"
#else
	" -CDDLIB"
#endif
#ifdef HAVE_LIBGLPK
	" +GLPK"
#else
	" -GLPK"
#endif
#ifdef POINTS2TRIANGS_PATH
	" +TOPCOM"
#else
	" -TOPCOM"
#endif
#ifdef USE_ZSOLVE
	" +ZSOLVE"
#else
	" -ZSOLVE"
#endif
#ifdef USE_PARKER
	" +PARKER"
#else
	" -PARKER"
#endif
    "\n"
    ;
}
