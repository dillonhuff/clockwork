struct power {
    int	     n;
    Vector  *powers;

    power(Value v, int max) {
	powers = Vector_Alloc(max+1);
	assert(powers);
	value_set_si(powers->p[0], 1);
	if (max >= 1)
	    value_assign(powers->p[1], v);
	n = 2;
    }
    ~power() {
	Vector_Free(powers);
    }
    Value *operator[](int exp) {
	assert(exp >= 0);
	assert(exp < powers->Size);
	for (; n <= exp; ++n)
	    value_multiply(powers->p[n], powers->p[n-1], powers->p[1]);
	return &powers->p[exp];
    }
};
