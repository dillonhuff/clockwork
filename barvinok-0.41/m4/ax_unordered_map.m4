AC_DEFUN([AX_UNORDERED_MAP], [
	SAVE_CXX="$CXX"
	SAVE_CXXCPP="$CXXCPP"
	AX_CXX_COMPILE_STDCXX_11([], [optional])
	AC_LANG_SAVE
	AC_LANG_CPLUSPLUS
	AC_TRY_COMPILE([#include <unordered_map>], [using std::unordered_map;],
		AC_DEFINE([HAVE_UNORDERED_MAP], [],
			[define if std::unordered_map is available]),
		[CXX="$SAVE_CXX"
		 CXXCPP="$SAVE_CXXCPP"
		])
	AC_LANG_RESTORE
])
