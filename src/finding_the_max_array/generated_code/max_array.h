#ifndef _max_array_h
#define _max_array_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "ctx.h"

/* Clause IMPORTS */
#include "iter_services.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void max_array__INITIALISATION(void);

/* Clause OPERATIONS */

extern void max_array__getMaximum(int32_t *array, int32_t *maxi);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _max_array_h */
