#ifndef _link_receiver_h
#define _link_receiver_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "xor_spec.h"

/* Clause IMPORTS */
#include "xor_ops.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
#define link_receiver__LINK_KEY 23130
/* Array and record constants */


/* Clause CONCRETE_VARIABLES */

extern void link_receiver__INITIALISATION(void);

/* Clause OPERATIONS */

extern void link_receiver__receive_frame(uint16_t msg_one, uint16_t msg_two);
extern void link_receiver__frame_accepted(bool *res);
extern void link_receiver__retained_payload(uint16_t *res);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _link_receiver_h */
