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
    ctx__pos_left,
    ctx__pos_right,
    ctx__pos_unknown
    
} ctx__POSITION;
#define ctx__POSITION__max 3
typedef enum
{
    ctx__sensing,
    ctx__acting
    
} ctx__PHASE;
#define ctx__PHASE__max 2

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void ctx__INITIALISATION(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _ctx_h */
