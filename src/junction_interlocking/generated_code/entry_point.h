#ifndef _entry_point_h
#define _entry_point_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "ctx.h"

/* Clause IMPORTS */
#include "interlocking.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void entry_point__INITIALISATION(void);

/* Clause OPERATIONS */

extern void entry_point__run_cycle(ctx__POSITION request);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _entry_point_h */
