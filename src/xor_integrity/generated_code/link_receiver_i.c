/* WARNING if type checker is not performed, translation could contain errors ! */

#include "link_receiver.h"

/* Clause SEES */
#include "xor_spec.h"

/* Clause IMPORTS */
#include "xor_ops.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

#define link_receiver__LINK_KEY 23130
/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

static bool link_receiver__link_accepted;
static uint16_t link_receiver__payload_word;
static uint16_t link_receiver__guard_word;
/* Clause INITIALISATION */
void link_receiver__INITIALISATION(void)
{
    
    xor_ops__INITIALISATION();
    link_receiver__link_accepted = false;
    link_receiver__payload_word = 0;
    link_receiver__guard_word = 0;
}

/* Clause OPERATIONS */

void link_receiver__receive_frame(uint16_t msg_one, uint16_t msg_two)
{
    uint16_t check;
    
    xor_ops__xor16(msg_one, msg_two, &check);
    if(check == link_receiver__LINK_KEY)
    {
        link_receiver__link_accepted = true;
        link_receiver__payload_word = msg_one;
        link_receiver__guard_word = msg_two;
    }
    else
    {
        link_receiver__link_accepted = false;
    }
}

void link_receiver__frame_accepted(bool *res)
{
    (*res) = link_receiver__link_accepted;
}

void link_receiver__retained_payload(uint16_t *res)
{
    (*res) = link_receiver__payload_word;
}

