#ifndef _entry_point_h
#define _entry_point_h

#include <stdint.h>
#include <stdbool.h>
/* Clause IMPORTS */
#include "ctx.h"
#include "main_fuel.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */
typedef enum
{
    entry_point__NOMINAL,
    entry_point__LOW_LEVEL
    
} entry_point__ALARM_STATUS;
#define entry_point__ALARM_STATUS__max 2

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void entry_point__INITIALISATION(void);

/* Clause OPERATIONS */

extern void entry_point__compute_initial_level_entry_point(void);
extern void entry_point__compute_remaining_fuel_entry_point(void);
extern void entry_point__get_estimated_level_entry_point(int32_t *estimated_lvl);
extern void entry_point__get_status_entry_point(ctx__ALARM_STATUS *status_1);
extern void entry_point__get_estimated_consumption_entry_point(int32_t *estimated_cmpt);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _entry_point_h */
