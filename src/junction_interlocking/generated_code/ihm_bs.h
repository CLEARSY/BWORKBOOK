#ifndef _ihm_bs_h
#define _ihm_bs_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "ctx.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void ihm_bs__INITIALISATION(void);

/* Clause OPERATIONS */

extern void ihm_bs__set_disp_sig_A(bool state);
extern void ihm_bs__set_disp_sig_B(bool state);
extern void ihm_bs__set_disp_sw(ctx__POSITION new_pos);
extern void ihm_bs__get_sig_A_state(bool *ret);
extern void ihm_bs__get_sig_B_state(bool *ret);
extern void ihm_bs__get_sw_sensor(ctx__POSITION *ret);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _ihm_bs_h */
