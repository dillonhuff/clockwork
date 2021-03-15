extern int bv_cdd_initialized;

#define INIT_CDD							\
    do {								\
	if (!bv_cdd_initialized) {					\
	    dd_set_global_constants();					\
	    bv_cdd_initialized = 1;				    	\
	}								\
    } while (0)
