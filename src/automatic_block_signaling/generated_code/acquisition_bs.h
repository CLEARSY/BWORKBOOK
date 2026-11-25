#ifndef _acquisition_bs_h
#define _acquisition_bs_h

#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void acquisition_bs__INITIALISATION(void);

/* Clause OPERATIONS */

extern void acquisition_bs__capteur0(bool *aa);
extern void acquisition_bs__capteur1(bool *aa);
extern void acquisition_bs__capteur2(bool *aa);
extern void acquisition_bs__capteur3(bool *aa);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _acquisition_bs_h */
