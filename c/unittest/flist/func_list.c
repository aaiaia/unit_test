#define FLIST_MAX  128u
static unittest_func s_flist[FLIST_MAX] = {((unittest_func)NULL), };
static unsigned int s_flist_idx = 0u;

void init_test_function(void) {
    clr_test_function();

    return;
}

func_status_e set_test_function(unittest_func p_func) {
    func_status_e fs;

    if(p_func != (unittest_func)NULL) {
        s_flist[s_flist_idx] = p_func;
        s_flist_idx++;

        fs = RUN_OK;
    } else {
        fs = INV_ARGS;
    }

    return fs;
}

void clr_test_functions(void) {
    s_flist_idx = 0u;

    for(unsigned int i=0u; i<FLIST_MAX; i++) {
        s_flist[i] = ((unittest_func)NULL);
    }

    return;
}

void run_test_functions(void) {
    for(unsigned int i=0u; i<s_flist_idx; i++) {
        if(s_flist[s_flist_idx] != ((unittest_func)NULL)) {
            s_flist[s_flist_idx]();
        } else { /* Do nothing */ }
    }
    return;
}
