/* WARNING if type checker is not performed, translation could contain errors ! */

#include "entry_point.h"

/* Clause IMPORTS */
#include "ctx.h"
#include "main_fuel.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void entry_point__INITIALISATION(void)
{
    
    ctx__INITIALISATION();
    main_fuel__INITIALISATION();
}

/* Clause OPERATIONS */

void entry_point__compute_initial_level_entry_point(void)
{
    main_fuel__compute_initial_level();
}

void entry_point__compute_remaining_fuel_entry_point(void)
{
    main_fuel__compute_remaining_fuel();
}

void entry_point__get_estimated_level_entry_point(int32_t *estimated_lvl)
{
    main_fuel__get_estimated_level(estimated_lvl);
}

void entry_point__get_status_entry_point(ctx__ALARM_STATUS *status_1)
{
    main_fuel__get_status(status_1);
}

void entry_point__get_estimated_consumption_entry_point(int32_t *estimated_cmpt)
{
    main_fuel__get_estimated_consumption(estimated_cmpt);
}

