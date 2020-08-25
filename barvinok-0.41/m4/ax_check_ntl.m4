AC_DEFUN([AX_CHECK_NTL], [
	bv_no_ntl=false
	SAVE_CPPFLAGS="$CPPFLAGS"
	SAVE_LDFLAGS="$LDFLAGS"
	CPPFLAGS="$NTL_CPPFLAGS $CPPFLAGS"
	LDFLAGS="$NTL_LDFLAGS $LDFLAGS"
	AC_LANG_PUSH(C++)
	AC_CHECK_HEADER([NTL/ZZ.h],[],[bv_no_ntl=true])
	AC_EGREP_CPP(yes, [
		#include <NTL/ZZ.h>
		#ifdef NTL_GMP_LIP
		yes
		#endif
		],:,AC_MSG_ERROR(ntl not compiled with gmp support))

	AC_TRY_COMPILE([
		#include <NTL/ZZ.h>
		using namespace NTL;
	], [], [], [AC_MSG_ERROR(Upgrade NTL or configure with NTL_STD_CXX=on)])
	AC_LANG_POP

	AC_CHECK_LIB(ntl, main,[],[bv_no_ntl=true])
	if test "$bv_no_ntl" = "true"; then
		AC_MSG_ERROR(Need ntl)
	fi
	CPPFLAGS="$SAVE_CPPFLAGS"
	LDFLAGS="$SAVE_LDFLAGS"
])
