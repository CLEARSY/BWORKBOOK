#ifndef _measure_h
#define _measure_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "ctx.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void measure__INITIALISATION(void);

/* Clause OPERATIONS */

extern void measure__measure_level(int32_t *m1, int32_t *m2);
extern void measure__measure_consumption(int32_t *m1, int32_t *m2, int32_t *m3);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _measure_h */
