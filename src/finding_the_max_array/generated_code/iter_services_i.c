/* WARNING if type checker is not performed, translation could contain errors ! */

#include "iter_services.h"

/* Clause SEES */
#include "ctx.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

static int32_t iter_services__index;
/* Clause INITIALISATION */
void iter_services__INITIALISATION(void)
{
    
    iter_services__index = 0;
}

/* Clause OPERATIONS */

void iter_services__init_iter(bool *flag)
{
    iter_services__index = 0;
    (*flag) = (((iter_services__index) <= (ctx__NN)) ? true : false);
}

void iter_services__next_iter(bool *flag, int32_t *elt)
{
    (*elt) = iter_services__index;
    iter_services__index = iter_services__index+1;
    (*flag) = (((iter_services__index) <= (ctx__NN)) ? true : false);
}

