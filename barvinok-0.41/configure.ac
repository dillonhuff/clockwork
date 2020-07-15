AC_INIT([barvinok], [0.41], [isl-development@googlegroups.com])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign subdir-objects])
m4_ifdef([AM_SILENT_RULES],[AM_SILENT_RULES([yes])])
AC_PROG_CC

AC_PROG_CXX
AM_PROG_LEX
AC_PROG_YACC
AC_SUBST(versioninfo)
versioninfo=23:6:0

AC_CANONICAL_HOST
AC_LIBTOOL_WIN32_DLL
AC_SUBST(BV_LDFLAGS)
case $host in
	*-*-cygwin* | *-*-mingw* | *-*-pw32* | *-*-os2*)
	if test "$enable_shared" = yes; then
		BV_LDFLAGS="-no-undefined" 
	fi
	;;
esac

AC_PROG_LIBTOOL

PKG_PROG_PKG_CONFIG

AC_CHECK_HEADERS(getopt.h)
AC_CHECK_HEADERS(sys/times.h)
AC_CHECK_FUNCS(sigaction)

AC_MSG_CHECKING(whether to build shared libbarvinok)
AC_ARG_ENABLE(shared_barvinok,
	AS_HELP_STRING([--enable-shared-barvinok],
		       [build shared barvinok library]),
	[bv_cv_shared_barvinok=$enableval], [bv_cv_shared_barvinok="no"])
AC_MSG_RESULT($bv_cv_shared_barvinok)
if test "x$bv_cv_shared_barvinok" != "xyes" ; then
	BV_LDFLAGS="$BV_LDFLAGS -static"
fi

AX_C___ATTRIBUTE__
AX_UNORDERED_MAP
AC_CXX_GNUCXX_HASHMAP

AC_ARG_WITH(default-prefix,
	AS_HELP_STRING([--with-default-prefix=DIR],
	    [Default installation prefix of optional packages]))
if test "${with_default_prefix+set}" = set; then
	if test "${with_libgmp+set}" != set -a \
	   -f "$with_default_prefix/include/gmp.h"; then
		with_gmp_prefix=$with_default_prefix
	fi
	if test "${with_ntl+set}" != set -a \
	   "${with_ntl_prefix+set}" != set -a \
	   -f "$with_default_prefix/include/NTL/ZZ.h"; then
		with_ntl_prefix=$with_default_prefix
	fi
	if test "${with_cddlib+set}" != set -a \
	   -f "$with_default_prefix/include/cddmp.h"; then
		with_cddlib=$with_default_prefix
	fi
	if test "${with_glpk+set}" != set -a \
	   -f "$with_default_prefix/include/glpk.h"; then
		with_glpk=$with_default_prefix
	fi
	if test "${with_topcom+set}" != set -a \
	   -f "$with_default_prefix/bin/points2triangs"; then
		with_topcom=$with_default_prefix
	fi
fi

AX_SUBMODULE(gmp,system|build,system)

case "$with_gmp" in
build)
	with_gmp_builddir=`echo @abs_builddir@ | \
			   $with_gmp_builddir/config.status --file=-`
	CPPFLAGS="-I$with_gmp_builddir $CPPFLAGS"
	LDFLAGS="-L$with_gmp_builddir/$lt_cv_objdir $LDFLAGS"
	bv_extra="--with-gmp --with-gmp-builddir=$with_gmp_builddir"
	bv_configure_args="$bv_configure_args $bv_extra"
	;;
system)
	if test "x$with_gmp_prefix" != "x"; then
		bv_extra="--with-libgmp=$with_gmp_prefix"
		bv_configure_args="$bv_configure_args $bv_extra"
		CPPFLAGS="-I$with_gmp_prefix/include $CPPFLAGS"
		LDFLAGS="-L$with_gmp_prefix/lib $LDFLAGS"
	else
		bv_configure_args="$bv_configure_args --with-libgmp --with-gmp"
	fi
	;;
esac

poly_cv_gmpfatal="no"
AC_CHECK_HEADER(gmp.h,
	[AC_CHECK_LIB(gmp,main,
	    [],
	    [poly_cv_gmpfatal="yes"])],
	[poly_cv_gmpfatal="yes"])
if test "$poly_cv_gmpfatal" = "yes"; then
	AC_MSG_ERROR([GMP not found])
fi
AC_CHECK_DECL(mpz_divisible_p,[],[AC_LIBOBJ(mpz_divisible_p)],[#include <gmp.h>])

AX_SUBMODULE(polylib,build|bundled|system,bundled)

AC_SUBST(POLYLIB_CPPFLAGS)
AC_SUBST(POLYLIB_LDFLAGS)
AC_SUBST(POLYLIB_LIBS)
case "$with_polylib" in
bundled)
	bv_configure_args="$bv_configure_args --with-polylib-builddir=../polylib"
	POLYLIB_CPPFLAGS="-I\$(top_builddir)/polylib/include -I\$(top_srcdir)/polylib/include"
	;;
build)
	with_polylib_builddir=`echo @abs_builddir@ | $with_polylib_builddir/config.status --file=-`
	POLYLIB_CPPFLAGS="-I$polylib_srcdir/include -I$with_polylib_builddir/include"
	POLYLIB_LIBS="$with_polylib_builddir/libpolylibgmp.la"
	;;
system)
	POLYLIB_LIBS="-lpolylibgmp"
	if test "x$with_polylib_prefix" != "x"; then
		POLYLIB_CPPFLAGS="-I$with_polylib_prefix/include"
		POLYLIB_LDFLAGS="-L$with_polylib_prefix/lib"
	fi
	SAVE_CPPFLAGS="$CPPFLAGS"
	CPPFLAGS="$POLYLIB_CPPFLAGS $CPPFLAGS"
	AC_CHECK_HEADERS([polylib/polylibgmp.h], [], [
		AC_MSG_ERROR(Need PolyLib)
	])
	CPPFLAGS="$SAVE_CPPFLAGS"
esac

AM_CONDITIONAL(BUNDLED_POLYLIB, test $with_polylib = bundled)

AX_SUBMODULE(isl,build|bundled|system,bundled)

AC_SUBST(ISL_CFLAGS)
AC_SUBST(ISL_LIBS)
AC_SUBST(ISL_SRCDIR)
AC_SUBST(ISL_BUILDDIR)
case "$with_isl" in
bundled)
	ISL_SRCDIR="$srcdir/isl"
	ISL_BUILDDIR=isl
	ISL_CFLAGS="-I\$(top_srcdir)/isl/include -I\$(top_builddir)/isl/include"
	bv_configure_args="$bv_configure_args --with-isl-builddir=../isl"
	PACKAGE_CFLAGS_ISL='-I${prefix}/include'
	;;
build)
	ISL_SRCDIR="$isl_srcdir"
	ISL_BUILDDIR=`echo @abs_builddir@ | $with_isl_builddir/config.status --file=-`
	bv_configure_args="$bv_configure_args --with-isl-builddir=$ISL_BUILDDIR"
	ISL_CFLAGS="-I$isl_srcdir/include -I$ISL_BUILDDIR/include"
	PACKAGE_CFLAGS_ISL='-I${prefix}/include'
	;;
system)
	PKG_CHECK_MODULES([ISL], [isl])
	PACKAGE_CFLAGS_ISL="$ISL_CFLAGS"
esac
AM_CONDITIONAL(BUNDLED_ISL, test $with_isl = bundled)
AM_CONDITIONAL(BUILD_ISL, test $with_isl = build)

AX_SUBMODULE(pet,bundled|build|system|no,no)
AC_SUBST(PET_CFLAGS)
AC_SUBST(PET_LIBS)
AC_SUBST(PET_BUILDDIR)
pet_suffix="top.pet"
case "$with_pet" in
bundled)
	PET_CFLAGS="-I\$(top_srcdir)/pet/include"
	AC_DEFINE(HAVE_PET,[],[use Pet])
	;;
build)
	PET_BUILDDIR=`echo @abs_builddir@ | $with_pet_builddir/config.status --file=-`
	PET_CFLAGS="-I$pet_srcdir/include"
	AC_DEFINE(HAVE_PET,[],[use Pet])
	;;
system)
	PKG_CHECK_MODULES([PET], [pet])
	AC_DEFINE(HAVE_PET,[],[use Pet])
	;;
no)
	pet_suffix="top.no_pet"
	;;
esac
AM_CONDITIONAL(BUNDLED_PET, test $with_pet = bundled)
AM_CONDITIONAL(BUILD_PET, test $with_pet = build)

AC_MSG_CHECKING(whether to use incremental algorithm)
AC_ARG_ENABLE(incremental,
	[AS_HELP_STRING([--enable-incremental@<:@=bf|df@:>@],
			[Enable incremental algorithm [bf]])],
	[bv_cv_incremental=$enableval], [bv_cv_incremental="no"])
AC_MSG_RESULT($bv_cv_incremental)
case $bv_cv_incremental in
	yes | bf)
		AC_DEFINE(USE_INCREMENTAL_BF,[], 
			  [Use breadth-first incremental algorithm])
	;;
	df)
		AC_DEFINE(USE_INCREMENTAL_DF,[], 
			  [Use depth-first incremental algorithm])
	;;
esac

AC_ARG_WITH(ntl,
	    [AC_HELP_STRING([--with-ntl=system|build],
			    [Which NTL to use [default=system]])])

AC_ARG_WITH(ntl-prefix,
	    [AC_HELP_STRING([--with-ntl-prefix=DIR],
			    [Prefix of NTL installation])])

AC_ARG_WITH(ntl-builddir,
	    [AC_HELP_STRING([--with-ntl-builddir=DIR],
			    [Prefix of NTL root build directory
			     containing include and src subdirectories])])

if test "x$with_ntl_builddir" != "x"; then
	if test "x$with_ntl" != "xbuild" -a "x$with_ntl" != "x"; then
		AC_MSG_ERROR(m4_normalize([Setting --with-ntl-builddir implies
					   use of build NTL]))
	fi
	with_ntl="build"
fi

if test "x$with_ntl_prefix" != "x"; then
	if test "x$with_ntl" != "xsystem" -a "x$with_ntl" != "x"; then
		AC_MSG_ERROR(m4_normalize([Setting --with-ntl-prefix implies
					   use of system NTL]))
	fi
	with_ntl="system"
fi

case "$with_ntl" in
build|system)
	;;
*)
	with_ntl="system"
	;;
esac
AC_MSG_CHECKING([which NTL to use])
AC_MSG_RESULT($with_ntl)

AC_SUBST(NTL_CPPFLAGS)
AC_SUBST(NTL_LDFLAGS)
case "$with_ntl" in
build)
	NTL_CPPFLAGS="-I$with_ntl_builddir/include"
	NTL_LDFLAGS="-L$with_ntl_builddir/src/$lt_cv_objdir"
	ntl_builddir_found=false
	AC_CHECK_FILE(["$with_ntl_builddir/src/ZZ.c"],
		      [ntl_builddir_found=true],[])
	if test "x$ntl_builddir_found" != "xtrue"; then
		if test -f "$with_ntl_builddir/ZZ.c"; then
			ntl_builddir=`dirname $with_ntl_builddir`
			AC_MSG_ERROR(m4_normalize(
			      [NTL source directory src/ specified as builddir.
			       Use root directory instead as
			       --with-ntl-builddir=$ntl_builddir]))
		else
			AC_MSG_ERROR([Could not find NTL in the builddir])
		fi
	fi
	;;
system)
	if test "x$with_ntl_prefix" != "x"; then
		NTL_CPPFLAGS="-I$with_ntl_prefix/include"
		NTL_LDFLAGS="-L$with_ntl_prefix/lib"
	fi
	;;
esac

AX_CHECK_NTL

AC_SUBST(bv_cone_hilbert_basis)
AC_MSG_CHECKING(whether to compile zsolve)
AC_ARG_WITH(zsolve,
	    [AS_HELP_STRING([--without-zsolve],[do not compile zsolve])],
            [ with_zsolve=$withval],  [ with_zsolve=yes ])
AC_MSG_RESULT($with_zsolve)

use_zsolve=false
if test "$with_zsolve" != "no"; then
	if test "$GCC" = "yes"; then
		$CC --version |
		sed -e 's/.* \(@<:@0-9@:>@@<:@0-9@:>@*\)\.\(@<:@0-9@:>@@<:@0-9@:>@*\).*/\1 \2/' |
		(read major minor
			if test $major -gt 3; then
				exit 0
			fi
			if test $major -eq 3 -a $minor -ge 4; then
				exit 0
			fi
			exit 1
		) && use_zsolve=true
	fi
	if test "$use_zsolve" = false; then
		AC_MSG_WARN(gcc 3.4 required to compile zsolve)
	else
		AC_DEFINE(USE_ZSOLVE,[],[use zsolve])
		bv_cone_hilbert_basis="cone_hilbert_basis\$(EXEEXT)"
	fi
fi
AM_CONDITIONAL(USE_ZSOLVE, test x$use_zsolve = xtrue)

AX_SUBMODULE(omega,no|system,no)

AC_SUBST(OMEGA_CPPFLAGS)
AC_SUBST(OMEGA_LDFLAGS)
AC_SUBST(OMEGA_LIBS)
AC_SUBST(OMEGA_CODEGEN_LIBS)
have_omega=false
have_codegen=false
case "$with_omega" in
system)
    if test "x$with_omega_prefix" != "xyes"; then
	OMEGA_CPPFLAGS="-I$with_omega_prefix/include/omega"
	OMEGA_LDFLAGS="-L$with_omega_prefix/lib"
    else
	for i in /usr/include /usr/local/include; do
	    if test -f $i/omega/omega.h; then
		OMEGA_CPPFLAGS="-I$i/omega"
	    fi
	done
    fi

    AC_LANG_PUSH(C++)
    SAVE_CPPFLAGS="$CPPFLAGS"
    SAVE_LDFLAGS="$LDFLAGS"
    CPPFLAGS="$OMEGA_CPPFLAGS $CPPFLAGS"
    LDFLAGS="$OMEGA_LDFLAGS $LDFLAGS"
    AC_CHECK_HEADERS([omega.h],[
	OMEGA_LIBS="-lomega"
	AC_CHECK_LIB(code_gen,main,[
		OMEGA_CODEGEN_LIBS="-lcode_gen -lomega"
		have_codegen=true
	])
	have_omega=true
    ],[AC_MSG_WARN(Omega not found)])
    CPPFLAGS="$SAVE_CPPFLAGS"
    LDFLAGS="$SAVE_LDFLAGS"
    AC_LANG_POP
    ;;
esac
if test "$have_omega" = true; then
	AC_DEFINE(HAVE_OMEGA,[],[use omega])
fi
AM_CONDITIONAL(HAVE_OMEGA, test x$have_omega = xtrue)

use_parker=false
AC_MSG_CHECKING(whether to compile parker)
AC_ARG_WITH(parker,
	    [AS_HELP_STRING([--without-zsolve],[do not compile zsolve])],
            [ with_parker=$withval],  [ with_parker=yes ])
AC_MSG_RESULT($with_parker)

if test "$with_parker" != "no"; then
	AC_MSG_CHECKING(for mona)
	AC_ARG_WITH(mona,
		[AS_HELP_STRING([--with-mona=DIR],[mona *source* directory])],
				[], [AC_MSG_RESULT(not specified)])

	if test "x$with_mona" != "x"; then
		AC_SUBST(MONAPATH)
		MONAPATH=$with_mona
		AC_MSG_RESULT($MONAPATH)
		use_parker=true
		AC_DEFINE(USE_PARKER,[],[use parker])
	fi

	if test "x$with_mona" = "x"; then
		AC_MSG_WARN(mona source directory required to compile parker)
		AC_MSG_WARN(http://www.brics.dk/mona/download)
	fi
fi
AM_CONDITIONAL(USE_PARKER, test x$use_parker = xtrue)

AC_MSG_CHECKING(whether to use cddlib)
AC_ARG_WITH(cddlib, [AS_HELP_STRING([--with-cddlib=DIR],[DIR Location of cddlib])],
            [ cddlib_package=$withval],  [ cddlib_package=yes ])
AC_MSG_RESULT($cddlib_package)

have_cddlib=false
if test "$cddlib_package" != "no"; then
    if test "x$cddlib_package" != "xyes"; then
	CPPFLAGS="-I$cddlib_package/include $CPPFLAGS"
	LDFLAGS="-L$cddlib_package/lib $LDFLAGS"
    fi
    AC_TRY_LINK([
#define GMPRATIONAL
#include <setoper.h>
#include <cddmp.h>
], [
    mytype a;
    dd_init(a); ], [
	have_cddlib=true
	AC_CHECK_LIB(cddgmp, main,[
		SAVE_LIBS="$LIBS"
		LIBS="-lcddgmp $LIBS"
		AC_DEFINE_UNQUOTED([SRCDIR], ["$srcdir"], [srcdir])
		AC_LANG_PUSH(C++)
		AC_RUN_IFELSE([AC_LANG_PROGRAM([[#define GMPRATIONAL
#include <setoper.h>
#include <cdd.h>]],
		[[
	const char *filename = SRCDIR"/cdd94e-test";
	FILE *f;
	dd_MatrixPtr M;
	dd_LPType *lp;
	dd_ErrorType err = dd_NoError;

	dd_set_global_constants();

	f = fopen(filename, "r");
	M = dd_PolyFile2Matrix(f, &err);
	lp = dd_Matrix2LP(M, &err);
	dd_LPSolve(lp, dd_DualSimplex, &err);
	return lp->LPS == dd_Inconsistent;
		]])],[
			AC_DEFINE(HAVE_LIBCDDGMP, [], [Define to 1 if you have the `cddgmp' library (-lcddgmp).])
		],[
			AC_MSG_WARN(please upgrade cddlib to 0.94e or later)
			LIBS="$SAVE_LIBS"
			have_cddlib=false
		])
		AC_LANG_POP
	],[have_cddlib=false])
    ])
fi
AM_CONDITIONAL(HAVE_CDDLIB, test x$have_cddlib = xtrue)



AC_MSG_CHECKING(whether to use GLPK)
AC_ARG_WITH(glpk, [AS_HELP_STRING([--with-glpk=DIR],[DIR Location of GLPK])],
            [ glpk_package=$withval],  [ glpk_package=yes ])
AC_MSG_RESULT($glpk_package)

have_glpk=false
if test "$glpk_package" != "no"; then
    if test "x$glpk_package" != "xyes"; then
	CPPFLAGS="-I$glpk_package/include $CPPFLAGS"
	LDFLAGS="-L$glpk_package/lib $LDFLAGS"
    fi
    AC_CHECK_HEADERS([glpk.h],[
	have_glpk=true
	AC_CHECK_LIB(glpk, [glp_simplex],[],[have_glpk=false])
    ])
fi
AM_CONDITIONAL(HAVE_GLPK, test x$have_glpk = xtrue)

AC_MSG_CHECKING(location of TOPCOM)
AC_ARG_WITH(topcom, [AS_HELP_STRING([--with-topcom=DIR],[Location of TOPCOM])],
            [topcom_package=$withval], [topcom_package=unspecified])
AC_MSG_RESULT($topcom_package)
have_topcom=false
if test "$topcom_package" != no; then
	topcom_path="$PATH"
	if test "$topcom_package" != unspecified; then
		topcom_path="$topcom_package/bin"
	fi
	AC_PATH_PROG([POINTS2TRIANGS], [points2triangs], [], [$topcom_path])
	if test -n "$POINTS2TRIANGS"; then
		have_topcom=true
		AC_DEFINE_UNQUOTED(POINTS2TRIANGS_PATH, ["$POINTS2TRIANGS"],
				    [Path of points2triangs])
	fi
fi
AM_CONDITIONAL(HAVE_TOPCOM, test x$have_topcom = xtrue)

AX_DETECT_GIT_HEAD
echo '#define GIT_HEAD_ID "'$GIT_HEAD_ID'"' > version.h

AC_LANG_PUSH(C++)
AC_TRY_COMPILE([
		#include <set>
		void negate();
	], [negate()],
	suffix="normal", suffix="broken")
AC_CONFIG_COMMANDS([barvinok/set.h],
		   [cp $srcdir/barvinok/set.h.$suffix barvinok/set.h],
		   [suffix="$suffix"])
AC_CONFIG_COMMANDS([barvinok/NTL.h],
		   [cp $srcdir/barvinok/NTL.h.$suffix barvinok/NTL.h],
		   [suffix="$suffix"])
use_fdstream=false
SAVE_CPPFLAGS="$CPPFLAGS"
CPPFLAGS="-I$srcdir $CPPFLAGS"
AC_TRY_COMPILE([#include "fdstream.h"],[],
	[AC_DEFINE(USE_FDSTREAM,[],[use fdstream])
	use_fdstream=true])
CPPFLAGS="$SAVE_CPPFLAGS"
AC_LANG_POP
AM_CONDITIONAL(USE_FDSTREAM, [test "$use_fdstream" = true])

AC_CONFIG_COMMANDS([interface/isl.py.top],
		 [cp $srcdir/interface/isl.py.$pet_suffix interface/isl.py.top],
	         [pet_suffix="$pet_suffix"])

PACKAGE_CFLAGS="$PACKAGE_CFLAGS_ISL"
PACKAGE_LIBS="-lbarvinok $EXTRA_PACKAGE_LIBS -lpolylibgmp -lisl"
AX_CREATE_PKGCONFIG_INFO

AH_BOTTOM([#include "config_post.h"])
AC_CONFIG_HEADERS(config.h)
AC_CONFIG_FILES(Makefile zsolve/Makefile doc/Makefile)
AC_CONFIG_FILES(parker/Makefile)
if test $with_polylib = bundled; then
	AC_CONFIG_SUBDIRS(polylib)
fi
if test $with_isl = bundled; then
	AC_CONFIG_SUBDIRS(isl)
fi
if test $with_pet = bundled; then
	AC_CONFIG_SUBDIRS(pet)
fi
AC_CONFIG_COMMANDS_POST([
	dnl pass on arguments to subdir configures, but don't
	dnl add them to config.status
	ac_configure_args="$ac_configure_args $bv_configure_args"
])
AC_OUTPUT
