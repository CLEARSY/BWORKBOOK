#ifndef _switch_h
#define _switch_h

#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */
typedef enum
{
    switch__normal,
    switch__reverse,
    switch__void
    
} switch__POSITION;
#define switch__POSITION__max 3

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void switch__INITIALISATION(void);

/* Clause OPERATIONS */

extern void switch__estimate(switch__POSITION m1, switch__POSITION m2, switch__POSITION m3, switch__POSITION *pos);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _switch_h */
