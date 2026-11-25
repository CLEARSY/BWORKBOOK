#ifndef _sensor_store_h
#define _sensor_store_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "sctx.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void sensor_store__INITIALISATION(void);

/* Clause OPERATIONS */

extern void sensor_store__set_one(int32_t ss, int32_t vv);
extern void sensor_store__query(int32_t ss, int32_t *vv);
extern void sensor_store__is_known(int32_t ss, bool *bb);
extern void sensor_store__clear(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _sensor_store_h */
