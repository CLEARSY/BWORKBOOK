#ifndef _sctx_h
#define _sctx_h

#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
#define sctx__NBSENSOR 5
#define sctx__MAXVAL 1023
/* Array and record constants */



/* Clause CONCRETE_VARIABLES */

extern void sctx__INITIALISATION(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _sctx_h */
