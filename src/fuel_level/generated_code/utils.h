#ifndef _utils_h
#define _utils_h

#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void utils__INITIALISATION(void);

/* Clause OPERATIONS */

extern void utils__minimum(int32_t aa, int32_t bb, int32_t *rr);
extern void utils__maximum(int32_t aa, int32_t bb, int32_t cc, int32_t *rr);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _utils_h */
