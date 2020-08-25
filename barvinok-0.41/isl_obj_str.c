#include <string.h>
#include <isl_obj_str.h>

__isl_give isl_str *isl_str_alloc(struct isl_ctx *ctx)
{
	isl_str *str;

	str = isl_alloc_type(ctx, struct isl_str);
	if (!str)
		return NULL;

	str->ctx = ctx;
	isl_ctx_ref(str->ctx);
	str->ref = 1;

	str->s = NULL;

	return str;
}

__isl_give isl_str *isl_str_from_string(isl_ctx *ctx, __isl_take char *s)
{
	isl_str *str;

	if (!s)
		return NULL;

	str = isl_str_alloc(ctx);
	if (!str)
		goto error;

	str->s = s;

	return str;
error:
	free(s);
	return NULL;
}

__isl_give isl_str *isl_str_copy(__isl_keep isl_str *str)
{
	if (!str)
		return NULL;

	str->ref++;
	return str;
}

void isl_str_free(__isl_take isl_str *str)
{
	if (!str)
		return;

	if (--str->ref > 0)
		return;

	free(str->s);
	isl_ctx_deref(str->ctx);
	free(str);
}

static void *isl_obj_str_copy(void *v)
{
	return isl_str_copy((isl_str *)v);
}

static void isl_obj_str_free(void *v)
{
	isl_str_free((isl_str *)v);
}

static __isl_give isl_printer *isl_obj_str_print(__isl_take isl_printer *p,
	void *v)
{
	isl_str *str = (isl_str *)v;

	p = isl_printer_print_str(p, "\"");
	p = isl_printer_print_str(p, str->s);
	p = isl_printer_print_str(p, "\"");

	return p;
}

__isl_give isl_str *isl_str_concat(__isl_take isl_str *str1,
	__isl_take isl_str *str2)
{
	isl_str *str = NULL;
	size_t len1, len2;

	if (!str1 || !str2)
		goto error;

	str = isl_str_alloc(str1->ctx);
	if (!str)
		goto error;

	len1 = strlen(str1->s);
	len2 = strlen(str2->s);
	str->s = isl_alloc_array(str1->ctx, char, len1 + len2 + 1);
	if (!str->s)
		goto error;

	memcpy(str->s, str1->s, len1);
	memcpy(str->s + len1, str2->s, len2);
	str->s[len1 + len2] = '\0';

	isl_str_free(str1);
	isl_str_free(str2);

	return str;
error:
	isl_str_free(str1);
	isl_str_free(str2);
	isl_str_free(str);
	return NULL;
}

static void *isl_obj_str_add(void *v1, void *v2)
{
	isl_str *str1 = (isl_str *)v1;
	isl_str *str2 = (isl_str *)v2;

	return isl_str_concat(str1, str2);
}

struct isl_obj_vtable isl_obj_str_vtable = {
	isl_obj_str_copy,
	isl_obj_str_add,
	isl_obj_str_print,
	isl_obj_str_free
};
