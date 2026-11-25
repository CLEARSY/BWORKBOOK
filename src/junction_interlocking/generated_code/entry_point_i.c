/* WARNING if type checker is not performed, translation could contain errors ! */

#include "entry_point.h"

/* Clause SEES */
#include "ctx.h"

/* Clause IMPORTS */
#include "interlocking.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void entry_point__INITIALISATION(void)
{
    
    interlocking__INITIALISATION();
}

/* Clause OPERATIONS */

void entry_point__run_cycle(ctx__POSITION request)
{
    interlocking__sense();
    interlocking__act(request);
}

