/*
 * Copyright 2008-2009 Katholieke Universiteit Leuven
 *
 * Use of this software is governed by the GNU GPLv2 license
 *
 * Written by Sven Verdoolaege, K.U.Leuven, Departement
 * Computerwetenschappen, Celestijnenlaan 200A, B-3001 Leuven, Belgium
 */

#ifndef ISL_SET_POLYLIB_H
#define ISL_SET_POLYLIB_H

#include <isl/set.h>
#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

__isl_give isl_basic_set *isl_basic_set_new_from_polylib(Polyhedron *P,
			__isl_take isl_space *dim);
Polyhedron *isl_basic_set_to_polylib(__isl_keep isl_basic_set *bset);

__isl_give isl_set *isl_set_new_from_polylib(Polyhedron *D,
			__isl_take isl_space *dim);
Polyhedron *isl_set_to_polylib(__isl_keep isl_set *set);

#if defined(__cplusplus)
}
#endif

#endif
