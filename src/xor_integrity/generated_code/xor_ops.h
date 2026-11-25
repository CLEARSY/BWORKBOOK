#ifndef _xor_ops_h
#define _xor_ops_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "xor_spec.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void xor_ops__INITIALISATION(void);

/* Clause OPERATIONS */

extern void xor_ops__xor16(uint16_t aa, uint16_t bb, uint16_t *res);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _xor_ops_h */
