#include <isl_obj_list.h>

struct isl_list *isl_list_alloc(struct isl_ctx *ctx, int n)
{
	int i;
	struct isl_list *list;

	isl_assert(ctx, n >= 0, return NULL);
	list = isl_alloc(ctx, struct isl_list,
			sizeof(struct isl_list) + n * sizeof(struct isl_obj));
	if (!list)
		return NULL;

	list->ctx = ctx;
	isl_ctx_ref(list->ctx);
	list->ref = 1;
	list->n = n;

	for (i = 0; i < n; ++i) {
		list->obj[i].type = isl_obj_none;
		list->obj[i].v = NULL;
	}

	return list;
}

struct isl_list *isl_list_copy(struct isl_list *list)
{
	if (!list)
		return NULL;

	list->ref++;
	return list;
}

void isl_list_free(struct isl_list *list)
{
	int i;

	if (!list)
		return;

	if (--list->ref > 0)
		return;

	for (i = 0; i < list->n; ++i)
		list->obj[i].type->free(list->obj[i].v);
	isl_ctx_deref(list->ctx);
	free(list);
}

static void *isl_obj_list_copy(void *v)
{
	return isl_list_copy((struct isl_list *)v);
}

static void isl_obj_list_free(void *v)
{
	isl_list_free((struct isl_list *)v);
}

static __isl_give isl_printer *isl_obj_list_print(__isl_take isl_printer *p,
	void *v)
{
	struct isl_list *list = (struct isl_list *)v;
	int i;

	p = isl_printer_print_str(p, "(");
	for (i = 0; i < list->n; ++i) {
		if (i)
			p = isl_printer_print_str(p, ", ");
		p = list->obj[i].type->print(p, list->obj[i].v);
	}
	p = isl_printer_print_str(p, ")");
	return p;
}

__isl_give isl_list *isl_list_concat(__isl_take isl_list *list1,
	__isl_take isl_list *list2)
{
	int i;
	struct isl_list *list;

	if (!list1 || !list2)
		goto error;

	list = isl_list_alloc(list1->ctx, list1->n + list2->n);
	if (!list)
		goto error;

	for (i = 0; i < list1->n; ++i) {
		list->obj[i].type = list1->obj[i].type;
		list->obj[i].v = list1->obj[i].type->copy(list1->obj[i].v);
	}

	for (i = 0; i < list2->n; ++i) {
		list->obj[list1->n + i].type = list2->obj[i].type;
		list->obj[list1->n + i].v = list2->obj[i].type->copy(list2->obj[i].v);
	}

	isl_list_free(list1);
	isl_list_free(list2);

	return list;
error:
	isl_list_free(list1);
	isl_list_free(list2);
	return NULL;
}

__isl_give isl_list *isl_list_add_obj(__isl_take isl_list *list,
	__isl_take struct isl_obj obj)
{
	struct isl_list *new_list;

	if (!list || !obj.v)
		goto error;

	new_list = isl_realloc(list->ctx, list, struct isl_list,
			sizeof(struct isl_list) +
			(list->n + 1) * sizeof(struct isl_obj));
	if (!new_list)
		goto error;

	list = new_list;
	list->obj[list->n] = obj;
	list->n++;

	return list;
error:
	obj.type->free(obj.v);
	isl_list_free(list);
	return NULL;
}

static void *isl_obj_list_add(void *v1, void *v2)
{
	struct isl_list *list1 = (struct isl_list *)v1;
	struct isl_list *list2 = (struct isl_list *)v2;

	return isl_list_concat(list1, list2);
}

struct isl_obj_vtable isl_obj_list_vtable = {
	isl_obj_list_copy,
	isl_obj_list_add,
	isl_obj_list_print,
	isl_obj_list_free
};
