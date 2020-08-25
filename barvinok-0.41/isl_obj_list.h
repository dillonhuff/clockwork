#include <isl/obj.h>

struct isl_list {
	int ref;

	struct isl_ctx *ctx;

	int n;
	struct isl_obj obj[];
};
typedef struct isl_list		isl_list;

struct isl_list *isl_list_alloc(struct isl_ctx *ctx, int n);
void isl_list_free(struct isl_list *list);

__isl_give isl_list *isl_list_concat(__isl_take isl_list *list1,
	__isl_take isl_list *list2);
__isl_give isl_list *isl_list_add_obj(__isl_take isl_list *list,
	__isl_take struct isl_obj obj);

extern struct isl_obj_vtable isl_obj_list_vtable;
#define isl_obj_list		(&isl_obj_list_vtable)
