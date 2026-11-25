#ifndef _track_bs_h
#define _track_bs_h

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

extern void track_bs__INITIALISATION(void);

/* Clause OPERATIONS */

extern void track_bs__read_track(bool *occ);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _track_bs_h */
