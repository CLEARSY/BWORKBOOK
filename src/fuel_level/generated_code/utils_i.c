/* WARNING if type checker is not performed, translation could contain errors ! */

#include "utils.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void utils__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void utils__minimum(int32_t aa, int32_t bb, int32_t *rr)
{
    if((aa) >= (bb))
    {
        (*rr) = bb;
    }
    else
    {
        (*rr) = aa;
    }
}

void utils__maximum(int32_t aa, int32_t bb, int32_t cc, int32_t *rr)
{
    if((aa) >= (bb))
    {
        if((aa) >= (cc))
        {
            (*rr) = aa;
        }
        else
        {
            (*rr) = cc;
        }
    }
    else if((bb) >= (cc))
    {
        (*rr) = bb;
    }
    else
    {
        (*rr) = cc;
    }
}

