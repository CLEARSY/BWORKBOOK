/* WARNING if type checker is not performed, translation could contain errors ! */

#include "link_app.h"

/* Clause IMPORTS */
#include "xor_spec.h"
#include "link_receiver.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void link_app__INITIALISATION(void)
{
    
    xor_spec__INITIALISATION();
    link_receiver__INITIALISATION();
}

