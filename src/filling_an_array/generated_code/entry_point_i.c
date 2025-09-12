/* WARNING if type checker is not performed, translation could contain errors ! */

#include "entry_point.h"

/* Clause IMPORTS */
#include "ctx.h"
#include "array.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void entry_point__INITIALISATION(void)
{
    
    ctx__INITIALISATION();
    array__INITIALISATION();
}

/* Clause OPERATIONS */

void entry_point__op(void)
{
    array__set_array_value();
}

