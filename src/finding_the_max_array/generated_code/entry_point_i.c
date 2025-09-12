/* WARNING if type checker is not performed, translation could contain errors ! */

#include "entry_point.h"

/* Clause IMPORTS */
#include "max_array.h"
#include "ctx.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void entry_point__INITIALISATION(void)
{
    
    ctx__INITIALISATION();
    max_array__INITIALISATION();
}

/* Clause OPERATIONS */

void entry_point__get_max(int32_t *array, int32_t *maxi)
{
    max_array__getMaximum(array, maxi);
}

