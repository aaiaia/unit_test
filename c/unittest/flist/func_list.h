#ifndef UNITTEST_FUNC_LIST_H
#define UNITTEST_FUNC_LIST_H
#include "run_status.h"

typedef (void)(*unittest_func)(void);

void init_test_function(void);
func_status_e set_test_function(unittest_func p_func);
void clr_test_functions(void);
void run_test_functions(void);

#endif
