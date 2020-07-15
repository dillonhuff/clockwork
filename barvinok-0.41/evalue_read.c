#include <assert.h>
#include <ctype.h>
#include <barvinok/util.h>
#include "evalue_read.h"

#define ALLOC(type) (type*)malloc(sizeof(type))
#define ALLOCN(type,n) (type*)malloc((n) * sizeof(type))

enum token_type { TOKEN_UNKNOWN = 256, TOKEN_VALUE, TOKEN_IDENT, TOKEN_GE,
		  TOKEN_NE, TOKEN_UNION, TOKEN_VARS };

struct token {
    enum token_type  type;

    unsigned int on_new_line : 1;
    int line;
    int col;

    union {
	Value	v;
	char	*s;
    } u;
};

static struct token *token_new(int line, int col, unsigned on_new_line)
{
    struct token *tok = ALLOC(struct token);
    tok->line = line;
    tok->col = col;
    tok->on_new_line = on_new_line;
    return tok;
}

void token_free(struct token *tok)
{
    if (tok->type == TOKEN_VALUE)
	value_clear(tok->u.v);
    else if (tok->type == TOKEN_IDENT)
	free(tok->u.s);
    free(tok);
}

struct stream {
    FILE    	    *file;
    const char	    *str;
    int		    line;
    int		    col;
    int		    eof;

    char	    *buffer;
    size_t	    size;
    size_t	    len;
    int		    c;

    struct token    *tokens[5];
    int		    n_token;
};

static struct stream* stream_new()
{
    int i;
    struct stream *s = ALLOC(struct stream);
    s->size = 256;
    s->file = NULL;
    s->str = NULL;
    s->buffer = (char*)malloc(s->size);
    s->len = 0;
    s->line = 1;
    s->col = 0;
    s->eof = 0;
    s->c = -1;
    for (i = 0; i < 5; ++i)
	s->tokens[i] = NULL;
    s->n_token = 0;
    return s;
}

static struct stream* stream_new_file(FILE *file)
{
    struct stream *s = stream_new();
    s->file = file;
    return s;
}

static struct stream* stream_new_str(const char *str)
{
    struct stream *s = stream_new();
    s->str = str;
    return s;
}

static int stream_getc(struct stream *s)
{
    int c;
    if (s->eof)
	return -1;
    if (s->file)
	c = fgetc(s->file);
    else {
	c = *s->str++;
	if (c == '\0')
	    c = -1;
    }
    if (c == -1)
	s->eof = 1;
    if (!s->eof) {
	if (s->c == '\n') {
	    s->line++;
	    s->col = 0;
	} else
	    s->col++;
    }
    s->c = c;
    return c;
}

static void stream_ungetc(struct stream *s, int c)
{
    if (s->file)
	ungetc(c, s->file);
    else
	--s->str;
    s->c = -1;
}

static void stream_push_char(struct stream *s, int c)
{
    if (s->len >= s->size) {
	s->size = (3*s->size)/2;
	s->buffer = (char*)realloc(s->buffer, s->size);
    }
    s->buffer[s->len++] = c;
}

static void stream_push_token(struct stream *s, struct token *tok)
{
    assert(s->n_token < 5);
    s->tokens[s->n_token++] = tok;
}

static struct token *stream_next_token(struct stream *s)
{
    int c;
    struct token *tok;
    int line, col;
    int old_line = s->line;

    if (s->n_token)
	return s->tokens[--s->n_token];

    s->len = 0;

    /* skip spaces */
    while ((c = stream_getc(s)) != -1 && isspace(c))
	/* nothing */
	;

    line = s->line;
    col = s->col;

    if (c == -1)
	return NULL;
    if (c == '(' ||
        c == ')' ||
	c == '+' ||
	c == '/' ||
	c == '*' ||
	c == '^' ||
	c == '=' ||
	c == ',' ||
	c == '_' ||
	c == '[' ||
	c == ']' ||
	c == '{' ||
	c == '}') {
	tok = token_new(line, col, old_line != line);
	tok->type = (enum token_type)c;
	return tok;
    }
    if (c == '-' || isdigit(c)) {
	tok = token_new(line, col, old_line != line);
	tok->type = TOKEN_VALUE;
	value_init(tok->u.v);
	stream_push_char(s, c);
	while ((c = stream_getc(s)) != -1 && isdigit(c))
	    stream_push_char(s, c);
	if (c != -1)
	    stream_ungetc(s, c);
	if (s->len == 1 && s->buffer[0] == '-')
	    value_set_si(tok->u.v, -1);
	else {
	    stream_push_char(s, '\0');
	    mpz_set_str(tok->u.v, s->buffer, 0);
	}
	return tok;
    }
    if (c == '#' || isalpha(c)) {
	tok = token_new(line, col, old_line != line);
	stream_push_char(s, c);
	while ((c = stream_getc(s)) != -1 && isalnum(c))
	    stream_push_char(s, c);
	if (c != -1)
	    stream_ungetc(s, c);
	stream_push_char(s, '\0');
	if (!strcmp(s->buffer, "#variables")) {
	    tok->type = TOKEN_VARS;
	} else if (s->buffer[0] == '#') {
	    tok->type = TOKEN_UNKNOWN;
	} else if (!strcmp(s->buffer, "UNION")) {
	    tok->type = TOKEN_UNION;
	} else {
	    tok->type = TOKEN_IDENT;
	    tok->u.s = strdup(s->buffer);
	}
	return tok;
    }
    if (c == '>') {
	int c;
	if ((c = stream_getc(s)) == '=') {
	    tok = token_new(line, col, old_line != line);
	    tok->type = TOKEN_GE;
	    return tok;
	}
	if (c != -1)
	    stream_ungetc(s, c);
    }
    if (c == '!') {
	int c;
	if ((c = stream_getc(s)) == '=') {
	    tok = token_new(line, col, old_line != line);
	    tok->type = TOKEN_NE;
	    return tok;
	}
	if (c != -1)
	    stream_ungetc(s, c);
    }

    tok = token_new(line, col, old_line != line);
    tok->type = TOKEN_UNKNOWN;
    return tok;
}

void stream_error(struct stream *s, struct token *tok, char *msg)
{
    int line = tok ? tok->line : s->line;
    int col = tok ? tok->col : s->col;
    fprintf(stderr, "syntax error (%d, %d): %s\n", line, col, msg);
    if (tok) {
	if (tok->type < 256)
	    fprintf(stderr, "got '%c'\n", tok->type);
	else
	    fprintf(stderr, "got token type %d\n", tok->type);
    }
}

static void stream_free(struct stream *s)
{
    free(s->buffer);
    if (s->n_token != 0) {
	struct token *tok = stream_next_token(s);
	stream_error(s, tok, "unexpected token");
    }
    free(s);
}

struct parameter {
    char    	    	*name;
    int	     		 pos;
    struct parameter	*next;
};

struct parameter *parameter_new(const char *name, int len,
				int pos, struct parameter *next)
{
    struct parameter *p = ALLOC(struct parameter);
    p->name = strdup(name);
    p->name[len] = '\0';
    p->pos = pos;
    p->next = next;
    return p;
}

static int parameter_pos(struct parameter **p, const char *s, int len)
{
    int pos = *p ? (*p)->pos+1 : 0;
    struct parameter *q;

    if (len == -1)
	len = strlen(s);
    for (q = *p; q; q = q->next) {
	if (strncmp(q->name, s, len) == 0 && q->name[len] == '\0')
	    break;
    }
    if (q)
	pos = q->pos;
    else
	*p = parameter_new(s, len, pos, *p);
    return pos;
}

static int optional_power(struct stream *s)
{
    int pow;
    struct token *tok;
    tok = stream_next_token(s);
    if (!tok)
	return 1;
    if (tok->type != '^') {
	stream_push_token(s, tok);
	return 1;
    }
    token_free(tok);
    tok = stream_next_token(s);
    if (!tok || tok->type != TOKEN_VALUE) {
	stream_error(s, tok, "expecting exponent");
	if (tok)
	    stream_push_token(s, tok);
	return 1;
    }
    pow = VALUE_TO_INT(tok->u.v);
    token_free(tok);
    return pow;
}

static evalue *evalue_read_factor(struct stream *s, struct parameter **p);
static evalue *evalue_read_term(struct stream *s, struct parameter **p,
				int multi_line);

static evalue *create_fract_like(struct stream *s, evalue *arg, enode_type type,
			         struct parameter **p)
{
    evalue *e;
    int pow;
    pow = optional_power(s);

    e = ALLOC(evalue);
    value_init(e->d);
    e->x.p = new_enode(type, pow+2, -1);
    value_clear(e->x.p->arr[0].d);
    e->x.p->arr[0] = *arg;
    free(arg);
    evalue_set_si(&e->x.p->arr[1+pow], 1, 1);
    while (--pow >= 0)
	evalue_set_si(&e->x.p->arr[1+pow], 0, 1);

    return e;
}

static evalue *create_relation(evalue *arg, int ne)
{
    evalue *e;

    e = ALLOC(evalue);
    value_init(e->d);
    e->x.p = new_enode(relation, 2+ne, 0);
    value_clear(e->x.p->arr[0].d);
    e->x.p->arr[0] = *arg;
    free(arg);
    if (ne)
	evalue_set_si(&e->x.p->arr[1], 0, 1);
    evalue_set_si(&e->x.p->arr[1+ne], 1, 1);

    return e;
}

static evalue *read_fract(struct stream *s, struct token *tok, struct parameter **p)
{
    evalue *arg;

    tok = stream_next_token(s);
    assert(tok);
    assert(tok->type == '{');

    token_free(tok);
    arg = evalue_read_term(s, p, 1);
    tok = stream_next_token(s);
    if (!tok || tok->type != '}') {
	stream_error(s, tok, "expecting \"}\"");
	if (tok)
	    stream_push_token(s, tok);
    } else
	token_free(tok);

    return create_fract_like(s, arg, fractional, p);
}

static evalue *read_periodic(struct stream *s, struct parameter **p)
{
    evalue **list;
    int len;
    int n;
    evalue *e = NULL;

    struct token *tok;
    tok = stream_next_token(s);
    assert(tok && tok->type == '[');
    token_free(tok);

    len = 100;
    list = (evalue **)malloc(len * sizeof(evalue *));
    n = 0;

    for (;;) {
	evalue *e = evalue_read_term(s, p, 1);
	if (!e) {
	    stream_error(s, NULL, "missing argument or list element");
	    goto out;
	}
	if (n >= len) {
	    len = (3*len)/2;
	    list = (evalue **)realloc(list, len * sizeof(evalue *));
	}
	list[n++] = e;

	tok = stream_next_token(s);
	if (!tok) {
	    stream_error(s, NULL, "unexpected EOF");
	    goto out;
	}
	if (tok->type != ',')
	    break;
	token_free(tok);
    }

    if (n == 1 && (tok->type == '=' || tok->type == TOKEN_NE)) {
	int ne = tok->type == TOKEN_NE;
	token_free(tok);
	tok = stream_next_token(s);
	if (!tok || tok->type != TOKEN_VALUE) {
	    stream_error(s, tok, "expecting \"0\"");
	    if (tok)
		stream_push_token(s, tok);
	    goto out;
	}
	token_free(tok);
	tok = stream_next_token(s);
	if (!tok || tok->type != ']') {
	    stream_error(s, tok, "expecting \"]\"");
	    if (tok)
		stream_push_token(s, tok);
	    goto out;
	}
	token_free(tok);
	e = create_relation(list[0], ne);
	n = 0;
	goto out;
    }

    if (tok->type != ']') {
	stream_error(s, tok, "expecting \"]\"");
	stream_push_token(s, tok);
	goto out;
    }

    token_free(tok);

    tok = stream_next_token(s);
    if (tok && tok->type == '_') {
	int pos;
	token_free(tok);
	tok = stream_next_token(s);
	if (!tok || tok->type != TOKEN_IDENT) {
	    stream_error(s, tok, "expecting identifier");
	    if (tok)
		stream_push_token(s, tok);
	    goto out;
	}
	e = ALLOC(evalue);
	value_init(e->d);
	pos = parameter_pos(p, tok->u.s, -1);
	token_free(tok);
	e->x.p = new_enode(periodic, n, pos+1);
	while (--n >= 0) {
	    value_clear(e->x.p->arr[n].d);
	    e->x.p->arr[n] = *list[n];
	    free(list[n]);
	}
    } else if (n == 1) {
	if (tok)
	    stream_push_token(s, tok);
	e = create_fract_like(s, list[0], flooring, p);
	n = 0;
    } else {
	stream_error(s, tok, "unexpected token");
	if (tok)
	    stream_push_token(s, tok);
    }

out:
    while (--n >= 0)
	evalue_free(list[n]);
    free(list);
    return e;
}

/* frees product on error */
static evalue *read_factor_and_multiply(struct stream *s, struct parameter **p,
					evalue *product)
{
    evalue *e2;
    e2 = evalue_read_factor(s, p);
    if (!e2) {
	stream_error(s, NULL, "unexpected EOF");
	evalue_free(product);
	return NULL;
    }
    emul(e2, product);
    evalue_free(e2);
    return product;
}

static evalue *evalue_read_factor(struct stream *s, struct parameter **p)
{
    struct token *tok;
    evalue *e = NULL;

    tok = stream_next_token(s);
    if (!tok)
	return NULL;

    if (tok->type == '(') {
	token_free(tok);
	e = evalue_read_term(s, p, 1);
	tok = stream_next_token(s);
	if (!tok || tok->type != ')') {
	    stream_error(s, tok, "expecting \")\"");
	    if (tok)
		stream_push_token(s, tok);
	} else
	    token_free(tok);
    } else if (tok->type == TOKEN_VALUE) {
	int line = tok->line;
	e = ALLOC(evalue);
	value_init(e->d);
	value_set_si(e->d, 1);
	value_init(e->x.n);
	value_assign(e->x.n, tok->u.v);
	token_free(tok);
	tok = stream_next_token(s);
	if (tok && tok->type == '/') {
	    token_free(tok);
	    tok = stream_next_token(s);
	    if (!tok || tok->type != TOKEN_VALUE) {
		stream_error(s, tok, "expecting denominator");
		if (tok)
		    stream_push_token(s, tok);
		return NULL;
	    }
	    value_assign(e->d, tok->u.v);
	    token_free(tok);
	} else if (tok && tok->type == TOKEN_IDENT && tok->line == line) {
	    stream_push_token(s, tok);
	    e = read_factor_and_multiply(s, p, e);
	} else if (tok)
	    stream_push_token(s, tok);
    } else if (tok->type == TOKEN_IDENT) {
	int pos = parameter_pos(p, tok->u.s, -1);
	int pow = optional_power(s);
	token_free(tok);
	e = ALLOC(evalue);
	value_init(e->d);
	e->x.p = new_enode(polynomial, pow+1, pos+1);
	evalue_set_si(&e->x.p->arr[pow], 1, 1);
	while (--pow >= 0)
	    evalue_set_si(&e->x.p->arr[pow], 0, 1);
    } else if (tok->type == '[') {
	stream_push_token(s, tok);
	e = read_periodic(s, p);
    } else if (tok->type == '{') {
	stream_push_token(s, tok);
	e = read_fract(s, tok, p);
    }

    tok = stream_next_token(s);
    if (tok && tok->type == '*') {
	token_free(tok);
	e = read_factor_and_multiply(s, p, e);
    } else if (tok)
	stream_push_token(s, tok);

    return e;
}

static evalue *evalue_read_term(struct stream *s, struct parameter **p,
				int multi_line)
{
    struct token *tok;
    evalue *e = NULL;

    e = evalue_read_factor(s, p);
    if (!e)
	return NULL;

    tok = stream_next_token(s);
    if (!tok)
	return e;

    if (!multi_line && tok->on_new_line)
	stream_push_token(s, tok);
    else if (tok->type == '+' || tok->type == TOKEN_VALUE) {
	evalue *e2;
	if (tok->type == '+')
	    token_free(tok);
	else
	    stream_push_token(s, tok);
	e2 = evalue_read_term(s, p, multi_line);
	if (!e2) {
	    stream_error(s, NULL, "unexpected EOF");
	    return NULL;
	}
	eadd(e2, e);
	evalue_free(e2);
    } else
	stream_push_token(s, tok);

    return e;
}

struct constraint {
    int	    		 type;
    Vector  		*v;
    struct constraint 	*next;
    struct constraint 	*union_next;
};

static struct constraint *constraint_new()
{
    struct constraint *c = ALLOC(struct constraint);
    c->type = -1;
    c->v = Vector_Alloc(16);
    c->next = NULL;
    c->union_next = NULL;
    return c;
}

static void constraint_free(struct constraint *c)
{
    while (c) {
	struct constraint *next = c->next ? c->next : c->union_next;
	Vector_Free(c->v);
	free(c);
	c = next;
    }
}

static void constraint_extend(struct constraint *c, int pos)
{
    Vector *v;
    if (pos < c->v->Size)
	return;

    v = Vector_Alloc((3*c->v->Size)/2);
    Vector_Copy(c->v->p, v->p, c->v->Size);
    Vector_Free(c->v);
    c->v = v;
}

static int evalue_read_constraint(struct stream *s, struct parameter **p,
				  struct constraint **constraints,
				  struct constraint *union_next)
{
    struct token *tok;
    struct constraint *c = NULL;

    while ((tok = stream_next_token(s))) {
	struct token *tok2;
	int pos;
	if (tok->type == '+')
	    token_free(tok);
	else if (tok->type == TOKEN_IDENT) {
	    if (!c)
		c = constraint_new();
	    pos = parameter_pos(p, tok->u.s, -1);
	    constraint_extend(c, 1+pos);
	    value_set_si(c->v->p[1+pos], 1);
	    token_free(tok);
	} else if (tok->type == TOKEN_VALUE) {
	    if (!c)
		c = constraint_new();
	    tok2 = stream_next_token(s);
	    if (tok2 && tok2->type == TOKEN_VALUE) {
		/* Handle "-" space cst, where "-" is translated to -1 */
		value_multiply(tok->u.v, tok->u.v, tok2->u.v);
		token_free(tok2);
		tok2 = stream_next_token(s);
	    }
	    if (tok2 && tok2->type == TOKEN_IDENT) {
		pos = parameter_pos(p, tok2->u.s, -1);
		constraint_extend(c, 1+pos);
		value_assign(c->v->p[1+pos], tok->u.v);
		token_free(tok);
		token_free(tok2);
	    } else {
		if (tok2)
		    stream_push_token(s, tok2);
		value_assign(c->v->p[0], tok->u.v);
		token_free(tok);
	    }
	} else if (tok->type == TOKEN_GE || tok->type == '=') {
	    int type = tok->type == TOKEN_GE;
	    token_free(tok);
	    tok = stream_next_token(s);
	    if (!tok || tok->type != TOKEN_VALUE || value_notzero_p(tok->u.v)) {
		stream_error(s, tok, "expecting \"0\"");
		if (tok)
		    stream_push_token(s, tok);
		*constraints = NULL;
	    } else {
		if (!c) {
		    stream_error(s, NULL, "empty constraint");
		    *constraints = NULL;
		} else {
		    c->type = type;
		    c->next = *constraints;
		    c->union_next = union_next;
		    *constraints = c;
		}
		token_free(tok);
	    }
	    break;
	} else {
	    if (!c)
		stream_push_token(s, tok);
	    else {
		stream_error(s, tok, "unexpected token");
		*constraints = NULL;
	    }
	    return 0;
	}
    }
    return tok != NULL;
}

static struct constraint *evalue_read_domain(struct stream *s, struct parameter **p,
					     unsigned MaxRays)
{
    struct constraint *constraints = NULL;
    struct constraint *union_next = NULL;
    struct token *tok;
    int line;

    tok = stream_next_token(s);
    if (!tok)
	return NULL;
    stream_push_token(s, tok);

    line = tok->line;
    while (evalue_read_constraint(s, p, &constraints, union_next)) {
	tok = stream_next_token(s);
	if (tok) {
	    if (tok->type == TOKEN_UNION) {
		token_free(tok);
		tok = stream_next_token(s);
		if (!tok) {
		    stream_error(s, NULL, "unexpected EOF");
		    return constraints;
		}
		stream_push_token(s, tok);
		union_next = constraints;
		constraints = NULL;
	    } else {
		union_next = NULL;
		stream_push_token(s, tok);
		/* empty line separates domain from evalue */
		if (tok->line > line+1)
		    break;
	    }
	    line = tok->line;
	}
    }
    return constraints;
}

struct section {
    struct constraint	*constraints;
    evalue		*e;
    struct section	*next;
};

static const char **extract_parameters(struct parameter *p, unsigned *nparam)
{
    int i;
    const char **params;

    *nparam = p ? p->pos+1 : 0;
    params = ALLOCN(const char *, *nparam);
    for (i = 0; i < *nparam; ++i) {
	struct parameter *next = p->next;
	params[p->pos] = p->name;
	free(p);
	p = next;
    }
    return params;
}

static Polyhedron *constraints2domain(struct constraint *constraints,
				      unsigned nparam, unsigned MaxRays)
{
    Polyhedron *D;
    Matrix *M;
    int n;
    struct constraint *c;
    struct constraint *union_next = NULL;

    for (n = 0, c = constraints; c; ++n, c = c->next)
	;
    M = Matrix_Alloc(n, 1+nparam+1);
    while (--n >= 0) {
	struct constraint *next = constraints->next;
	union_next = constraints->union_next;
	Vector_Copy(constraints->v->p+1, M->p[n]+1, nparam);
	if (constraints->type)
	    value_set_si(M->p[n][0], 1);
	value_assign(M->p[n][1+nparam], constraints->v->p[0]);
	constraints->next = NULL;
	constraints->union_next = NULL;
	constraint_free(constraints);
	constraints = next;
    }
    D = Constraints2Polyhedron(M, MaxRays);
    Matrix_Free(M);

    if (union_next)
	D = DomainConcat(D, constraints2domain(union_next, nparam, MaxRays));
    return D;
}

static evalue *evalue_read_partition(struct stream *s, struct parameter *p,
				     const char ***ppp,
				     unsigned *nparam, unsigned MaxRays)
{
    struct section *part = NULL;
    struct constraint *constraints;
    evalue *e = NULL;
    int m = 0;

    while ((constraints = evalue_read_domain(s, &p, MaxRays))) {
	struct section *sect;
	evalue *e = evalue_read_term(s, &p, 0);
	if (!e) {
	    stream_error(s, NULL, "missing evalue");
	    break;
	}
	sect = ALLOC(struct section);
	sect->constraints = constraints;
	sect->e = e;
	sect->next = part;
	part = sect;
	++m;
    }

    if (part) {
	Polyhedron *D;
	int j;

	*ppp = extract_parameters(p, nparam);
	e = ALLOC(evalue);
	value_init(e->d);
	e->x.p = new_enode(partition, 2*m, *nparam);

	for (j = 0; j < m; ++j) {
	    struct section *next = part->next;
	    constraints = part->constraints;
	    D = constraints2domain(part->constraints, *nparam, MaxRays);
	    EVALUE_SET_DOMAIN(e->x.p->arr[2*(m-j-1)], D);
	    value_clear(e->x.p->arr[2*(m-j-1)+1].d);
	    e->x.p->arr[2*(m-j-1)+1] = *part->e;
	    free(part->e);
	    free(part);
	    part = next;
	}
    }
    return e;
}

static evalue *evalue_read(struct stream *s, const char *var_list,
			   const char ***ppp,
			   unsigned *nvar, unsigned *nparam, unsigned MaxRays)
{
    struct token *tok;
    evalue *e;
    struct parameter *p = NULL;
    char *next;
    int nv;

    if (var_list) {
	while ((next = strchr(var_list, ','))) {
	    if (next > var_list)
		parameter_pos(&p, var_list, next-var_list);
	    var_list = next+1;
	}
	if (strlen(var_list) > 0)
	    parameter_pos(&p, var_list, -1);
	nv = p ? p->pos+1 : 0;
    } else
	nv = -1;

    if (!(tok = stream_next_token(s)))
	return NULL;

    if (tok->type == TOKEN_VARS) {
	token_free(tok);
	for (;;) {
	    tok = stream_next_token(s);
	    if (!tok || tok->type != TOKEN_IDENT) {
		stream_error(s, tok, "expecting identifier");
		break;
	    }
	    if (nv == -1)
		parameter_pos(&p, tok->u.s, -1);
	    token_free(tok);
	    tok = stream_next_token(s);
	    if (!tok || tok->type != ',')
		break;
	    token_free(tok);
	}
	if (!tok)
	    return NULL;
	if (nv == -1)
	    nv = p ? p->pos+1 : 0;
    }

    if (tok->type == '(' || tok->type == '[') {
	stream_push_token(s, tok);
	e = evalue_read_term(s, &p, 0);
	*ppp = extract_parameters(p, nparam);
    } else if (tok->type == TOKEN_VALUE) {
	struct token *tok2 = stream_next_token(s);
	if (tok2)
	    stream_push_token(s, tok2);
	stream_push_token(s, tok);
	if (tok2 && (tok2->type == TOKEN_IDENT || tok2->type == TOKEN_GE))
	    e = evalue_read_partition(s, p, ppp, nparam, MaxRays);
	else {
	    e = evalue_read_term(s, &p, 0);
	    *ppp = extract_parameters(p, nparam);
	}
    } else if (tok->type == TOKEN_IDENT) {
	stream_push_token(s, tok);
	e = evalue_read_partition(s, p, ppp, nparam, MaxRays);
    } else {
	stream_error(s, tok, "unexpected token");
	*nparam = nv == -1 ? 0 : nv;
	e = NULL;
    }
    if (nv == -1)
	*nvar = *nparam;
    else
	*nvar = nv;
    *nparam -= *nvar;
    return e;
}

evalue *evalue_read_from_file(FILE *in, const char *var_list,
			      const char ***ppp,
			      unsigned *nvar, unsigned *nparam, unsigned MaxRays)
{
    evalue *e;
    struct stream *s = stream_new_file(in);
    e = evalue_read(s, var_list, ppp, nvar, nparam, MaxRays);
    stream_free(s);
    return e;
}

evalue *evalue_read_from_str(const char *str, const char *var_list,
			     const char ***ppp,
			     unsigned *nvar, unsigned *nparam, unsigned MaxRays)
{
    evalue *e;
    struct stream *s = stream_new_str(str);
    e = evalue_read(s, var_list, ppp, nvar, nparam, MaxRays);
    stream_free(s);
    return e;
}
