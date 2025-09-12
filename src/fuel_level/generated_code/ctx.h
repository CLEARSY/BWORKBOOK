#ifndef _ctx_h
#define _ctx_h

#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */
typedef enum
{
    ctx__NOMINAL,
    ctx__LOW_LEVEL
    
} ctx__ALARM_STATUS;
#define ctx__ALARM_STATUS__max 2

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
#define ctx__TANK_CAPACITY 1000
#define ctx__MAX_CONSUMPTION 10
#define ctx__WARNING_CAPACITY 300
/* Array and record constants */




/* Clause CONCRETE_VARIABLES */

extern void ctx__INITIALISATION(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _ctx_h */
