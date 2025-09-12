/* WARNING if type checker is not performed, translation could contain errors ! */

#include "max_array.h"

/* Clause SEES */
#include "ctx.h"

/* Clause IMPORTS */
#include "iter_services.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void max_array__INITIALISATION(void)
{
    
    iter_services__INITIALISATION();
}

/* Clause OPERATIONS */

void max_array__getMaximum(int32_t *array, int32_t *maxi)
{
    int32_t local_maxi;
    int32_t step;
    bool flag;
    
    iter_services__init_iter(&flag);
    iter_services__next_iter(&flag, &step);
    local_maxi = array[step];
    while((flag == true))
    {
        {
            int32_t var_loc;
            
            iter_services__next_iter(&flag, &step);
            var_loc = array[step];
            if(((local_maxi) < (var_loc)))
            {
                local_maxi = var_loc;
            }
        }
    }
    (*maxi) = local_maxi;
}

