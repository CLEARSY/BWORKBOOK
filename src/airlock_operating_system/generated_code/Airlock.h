#ifndef _Airlock_h
#define _Airlock_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Airlock_pressure_bs.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */
typedef enum
{
    Airlock__ACQ,
    Airlock__CTRL
    
} Airlock__PHASE;
#define Airlock__PHASE__max 2

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void Airlock__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Airlock__actualize_pressure(void);
extern void Airlock__enable_doors_opening(void);
extern void Airlock__get_airlock_pressure(Airlock_pressure_bs__PRESSURE *ret);
extern void Airlock__get_is_indoor_door_openable(bool *ret);
extern void Airlock__get_is_outdoor_door_openable(bool *ret);
extern void Airlock__get_cycle(Airlock__PHASE *ret);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Airlock_h */
