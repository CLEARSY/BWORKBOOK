#ifndef _Airlock_pressure_bs_h
#define _Airlock_pressure_bs_h

#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */
typedef enum
{
    Airlock_pressure_bs__indoor_pressure,
    Airlock_pressure_bs__outdoor_pressure,
    Airlock_pressure_bs__other_pressure
    
} Airlock_pressure_bs__PRESSURE;
#define Airlock_pressure_bs__PRESSURE__max 3

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void Airlock_pressure_bs__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Airlock_pressure_bs__get_pressure(Airlock_pressure_bs__PRESSURE *pres);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Airlock_pressure_bs_h */
