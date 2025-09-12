/* WARNING if type checker is not performed, translation could contain errors ! */

#include "array.h"

/* Clause SEES */
#include "ctx.h"

/* Clause IMPORTS */
#include "iter_services.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t array__Array[ctx__NN+1];
/* Clause INITIALISATION */
void array__INITIALISATION(void)
{
    
    unsigned int i = 0;
    iter_services__INITIALISATION();
    for(i = 0; i <= ctx__NN;i++)
    {
        array__Array[i] = 0;
    }
}

/* Clause OPERATIONS */

void array__set_array_value(void)
{
    int32_t current;
    bool flag;
    
    iter_services__init_iter(&flag);
    while(flag == true)
    {
        iter_services__next_iter(&flag, &current);
        array__Array[current] = current;
    }
}

