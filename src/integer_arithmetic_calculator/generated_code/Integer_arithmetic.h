#ifndef _Integer_arithmetic_h
#define _Integer_arithmetic_h

#include <stdint.h>
#include <stdbool.h>
#include "b_pow.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void Integer_arithmetic__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Integer_arithmetic__set_a(int32_t xx);
extern void Integer_arithmetic__set_b(int32_t xx);
extern void Integer_arithmetic__get_result(int32_t *res);
extern void Integer_arithmetic__sum_ab(void);
extern void Integer_arithmetic__sub_ab(void);
extern void Integer_arithmetic__mul_ab(void);
extern void Integer_arithmetic__div_ab(void);
extern void Integer_arithmetic__mod_ab(void);
extern void Integer_arithmetic__pow_a(int32_t pp);
extern void Integer_arithmetic__max_ab(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Integer_arithmetic_h */
