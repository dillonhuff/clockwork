#ifndef BARVINOK_ISL_H
#define BARVINOK_ISL_H

#include <isl/polynomial.h>
#include <isl/union_set.h>

#if defined(__cplusplus)
extern "C" {
#endif

__isl_export
__isl_give isl_pw_qpolynomial *isl_basic_set_card(__isl_take isl_basic_set *bset);
__isl_export
__isl_give isl_pw_qpolynomial *isl_basic_map_card(__isl_take isl_basic_map *bmap);
__isl_export
__isl_give isl_pw_qpolynomial *isl_set_card(__isl_take isl_set *set);
__isl_export
__isl_give isl_pw_qpolynomial *isl_map_card(__isl_take isl_map *map);
__isl_export
__isl_give isl_union_pw_qpolynomial *isl_union_set_card(
	__isl_take isl_union_set *uset);
__isl_export
__isl_give isl_union_pw_qpolynomial *isl_union_map_card(
	__isl_take isl_union_map *umap);
__isl_export
__isl_give isl_pw_qpolynomial *isl_pw_qpolynomial_sum(
	__isl_take isl_pw_qpolynomial *pwqp);
__isl_export
__isl_give isl_union_pw_qpolynomial *isl_union_pw_qpolynomial_sum(
	__isl_take isl_union_pw_qpolynomial *upwqp);
__isl_give isl_pw_qpolynomial *isl_set_apply_pw_qpolynomial(
	__isl_take isl_set *set, __isl_take isl_pw_qpolynomial *pwqp);
__isl_give isl_pw_qpolynomial *isl_map_apply_pw_qpolynomial(
	__isl_take isl_map *map, __isl_take isl_pw_qpolynomial *pwqp);
__isl_give isl_union_pw_qpolynomial *isl_union_set_apply_union_pw_qpolynomial(
	__isl_take isl_union_set *uset,
	__isl_take isl_union_pw_qpolynomial *upwqp);
__isl_give isl_union_pw_qpolynomial *isl_union_map_apply_union_pw_qpolynomial(
	__isl_take isl_union_map *umap,
	__isl_take isl_union_pw_qpolynomial *upwqp);

#if defined(__cplusplus)
}
#endif

#endif
