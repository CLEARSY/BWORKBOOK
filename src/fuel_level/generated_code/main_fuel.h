#ifndef _main_fuel_h
#define _main_fuel_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "ctx.h"

/* Clause IMPORTS */
#include "measure.h"
#include "utils.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void main_fuel__INITIALISATION(void);

/* Clause OPERATIONS */

extern void main_fuel__compute_initial_level(void);
extern void main_fuel__compute_remaining_fuel(void);
extern void main_fuel__get_estimated_level(int32_t *estimated_lvl);
extern void main_fuel__get_status(ctx__ALARM_STATUS *status_1);
extern void main_fuel__get_estimated_consumption(int32_t *estimated_cmpt);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _main_fuel_h */
