#ifndef _card_input_h
#define _card_input_h

#include <stdint.h>
#include <stdbool.h>
/* Clause IMPORTS */
#include "iter_services.h"
#include "ctx.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void card_input__INITIALISATION(void);

/* Clause OPERATIONS */

extern void card_input__validate_card(int32_t *card_numbers, bool *is_valid);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _card_input_h */
