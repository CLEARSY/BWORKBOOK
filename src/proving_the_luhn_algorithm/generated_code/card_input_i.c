/* WARNING if type checker is not performed, translation could contain errors ! */

#include "card_input.h"

/* Clause IMPORTS */
#include "iter_services.h"
#include "ctx.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void card_input__INITIALISATION(void)
{
    
    ctx__INITIALISATION();
    iter_services__INITIALISATION();
}

/* Clause OPERATIONS */

void card_input__validate_card(int32_t *card_numbers, bool *is_valid)
{
    {
        int32_t local_sum;
        bool flag;
        int32_t step;
        int32_t local_mod;
        
        local_sum = 0;
        step = 0;
        local_mod = 0;
        iter_services__init_iter(&flag);
        while((flag == true))
        {
            {
                int32_t var_loc;
                
                iter_services__next_iter(&flag, &step);
                var_loc = card_numbers[step];
                local_mod = step % 2;
                if((local_mod == 0))
                {
                    var_loc = var_loc * 2;
                    if(((var_loc) > (9)))
                    {
                        var_loc = var_loc-9;
                    }
                }
                local_sum = local_sum+var_loc;
            }
        }
        local_mod = local_sum % 10;
        (*is_valid) = ((local_mod == 0) ? true : false);
    }
}

