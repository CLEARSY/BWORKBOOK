/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Airlock.h"

/* Clause SEES */
#include "Airlock_pressure_bs.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

static Airlock_pressure_bs__PRESSURE Airlock__airlock_pressure;
static bool Airlock__is_indoor_door_openable;
static bool Airlock__is_outdoor_door_openable;
static Airlock__PHASE Airlock__cycle;
/* Clause INITIALISATION */
void Airlock__INITIALISATION(void)
{
    
    Airlock__airlock_pressure = Airlock_pressure_bs__other_pressure;
    Airlock__is_indoor_door_openable = false;
    Airlock__is_outdoor_door_openable = false;
    Airlock__cycle = Airlock__ACQ;
}

/* Clause OPERATIONS */

void Airlock__actualize_pressure(void)
{
    Airlock_pressure_bs__get_pressure(&Airlock__airlock_pressure);
    Airlock__cycle = Airlock__CTRL;
}

void Airlock__enable_doors_opening(void)
{
    switch(Airlock__airlock_pressure)
    {
        case Airlock_pressure_bs__indoor_pressure : {
            
            Airlock__is_indoor_door_openable = true;
            Airlock__is_outdoor_door_openable = false;
            break;
        }
        case Airlock_pressure_bs__outdoor_pressure : {
            
            Airlock__is_indoor_door_openable = false;
            Airlock__is_outdoor_door_openable = true;
            break;
        }
        default : {
            
            Airlock__is_indoor_door_openable = false;
            Airlock__is_outdoor_door_openable = false;
            break;
        }
    }
    Airlock__cycle = Airlock__ACQ;
}

void Airlock__get_airlock_pressure(Airlock_pressure_bs__PRESSURE *ret)
{
    (*ret) = Airlock__airlock_pressure;
}

void Airlock__get_is_indoor_door_openable(bool *ret)
{
    (*ret) = Airlock__is_indoor_door_openable;
}

void Airlock__get_is_outdoor_door_openable(bool *ret)
{
    (*ret) = Airlock__is_outdoor_door_openable;
}

void Airlock__get_cycle(Airlock__PHASE *ret)
{
    (*ret) = Airlock__cycle;
}

