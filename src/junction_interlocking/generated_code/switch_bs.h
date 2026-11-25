#ifndef _switch_bs_h
#define _switch_bs_h

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

extern void switch_bs__INITIALISATION(void);

/* Clause OPERATIONS */

extern void switch_bs__read_switch(ctx__POSITION *pos);
extern void switch_bs__move_to_left(void);
extern void switch_bs__move_to_right(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _switch_bs_h */
