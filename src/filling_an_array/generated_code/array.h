#ifndef _array_h
#define _array_h

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

extern int32_t array__Array[ctx__NN+1];
extern void array__INITIALISATION(void);

/* Clause OPERATIONS */

extern void array__set_array_value(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _array_h */
