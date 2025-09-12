#ifndef _iter_services_h
#define _iter_services_h

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

extern void iter_services__INITIALISATION(void);

/* Clause OPERATIONS */

extern void iter_services__init_iter(bool *flag);
extern void iter_services__next_iter(bool *flag, int32_t *elt);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _iter_services_h */
