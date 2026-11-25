#ifndef _interlocking_h
#define _interlocking_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "ctx.h"

/* Clause IMPORTS */
#include "switch_bs.h"
#include "track_bs.h"
#include "ihm_bs.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void interlocking__INITIALISATION(void);

/* Clause OPERATIONS */

extern void interlocking__sense(void);
extern void interlocking__act(ctx__POSITION request);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _interlocking_h */
