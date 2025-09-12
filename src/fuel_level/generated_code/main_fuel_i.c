/* WARNING if type checker is not performed, translation could contain errors ! */

#include "main_fuel.h"

/* Clause SEES */
#include "ctx.h"

/* Clause IMPORTS */
#include "measure.h"
#include "utils.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

static int32_t main_fuel__estimated_level;
static int32_t main_fuel__estimated_consumption;
static ctx__ALARM_STATUS main_fuel__status;
/* Clause INITIALISATION */
void main_fuel__INITIALISATION(void)
{
    
    measure__INITIALISATION();
    utils__INITIALISATION();
    main_fuel__estimated_level = 0;
    main_fuel__estimated_consumption = 0;
    main_fuel__status = ctx__LOW_LEVEL;
}

/* Clause OPERATIONS */

void main_fuel__compute_initial_level(void)
{
    int32_t m1;
    int32_t m2;
    
    measure__measure_level(&m1, &m2);
    utils__minimum(m1, m2, &main_fuel__estimated_level);
    if((main_fuel__estimated_level) <= (ctx__WARNING_CAPACITY))
    {
        main_fuel__status = ctx__LOW_LEVEL;
    }
    else
    {
        main_fuel__status = ctx__NOMINAL;
    }
}

void main_fuel__compute_remaining_fuel(void)
{
    int32_t m1;
    int32_t m2;
    int32_t m3;
    
    measure__measure_consumption(&m1, &m2, &m3);
    utils__maximum(m1, m2, m3, &main_fuel__estimated_consumption);
    if((main_fuel__estimated_consumption) >= (main_fuel__estimated_level))
    {
        main_fuel__estimated_level = 0;
    }
    else
    {
        main_fuel__estimated_level = main_fuel__estimated_level-main_fuel__estimated_consumption;
    }
    if((main_fuel__estimated_level) <= (ctx__WARNING_CAPACITY))
    {
        main_fuel__status = ctx__LOW_LEVEL;
    }
}

void main_fuel__get_estimated_level(int32_t *estimated_lvl)
{
    (*estimated_lvl) = main_fuel__estimated_level;
}

void main_fuel__get_status(ctx__ALARM_STATUS *status_1)
{
    (*status_1) = main_fuel__status;
}

void main_fuel__get_estimated_consumption(int32_t *estimated_cmpt)
{
    (*estimated_cmpt) = main_fuel__estimated_consumption;
}

