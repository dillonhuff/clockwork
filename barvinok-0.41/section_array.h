#ifndef SECTION_ARRAY_H
#define SECTION_ARRAY_H

#include <barvinok/evalue.h>

#define REALLOCN(ptr,type,n) (type*)realloc(ptr, (n) * sizeof(type))

struct evalue_section_array {
    struct evalue_section *s;
    int size;
    int ns;
};

static void evalue_section_array_init(struct evalue_section_array *sections)
{
    sections->size = 0;
    sections->ns = 0;
    sections->s = NULL;
}

static void evalue_section_array_ensure(struct evalue_section_array *sections,
					int size)
{
    if (size <= sections->size)
	return;

    sections->size = size + 32;
    sections->s = REALLOCN(sections->s, struct evalue_section, sections->size);
}

static void evalue_section_array_add(struct evalue_section_array *sections,
					Polyhedron *D, evalue *e)
{
    sections->s[sections->ns].E = e;
    sections->s[sections->ns].D = D;
    ++sections->ns;
}

#endif
