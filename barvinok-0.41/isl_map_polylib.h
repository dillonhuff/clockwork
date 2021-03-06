/*
 * Copyright 2008-2009 Katholieke Universiteit Leuven
 *
 * Use of this software is governed by the GNU GPLv2 license
 *
 * Written by Sven Verdoolaege, K.U.Leuven, Departement
 * Computerwetenschappen, Celestijnenlaan 200A, B-3001 Leuven, Belgium
 */

#ifndef ISL_MAP_POLYLIB_H
#define ISL_MAP_POLYLIB_H

#include <isl/space.h>
#include <isl/map.h>
#include <barvinok/polylib.h>

#if defined(__cplusplus)
extern "C" {
#endif

__isl_give isl_basic_map *isl_basic_map_new_from_polylib(Polyhedron *P,
	__isl_take isl_space *space);
Polyhedron *isl_basic_map_to_polylib(__isl_keep isl_basic_map *bmap);
Polyhedron *isl_map_to_polylib(__isl_keep isl_map *map);

#if defined(__cplusplus)
}
#endif

#endif
