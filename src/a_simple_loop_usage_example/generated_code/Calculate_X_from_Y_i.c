/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Calculate_X_from_Y.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t Calculate_X_from_Y__xx;
int32_t Calculate_X_from_Y__yy;
/* Clause INITIALISATION */
void Calculate_X_from_Y__INITIALISATION(void)
{
    
    Calculate_X_from_Y__xx = 3;
    Calculate_X_from_Y__yy = 0;
}

/* Clause OPERATIONS */

void Calculate_X_from_Y__calculate_new_x(int32_t new_yy)
{
    int32_t index;
    int32_t xx_copy;
    
    index = 0;
    xx_copy = new_yy;
    while((index) < (3))
    {
        xx_copy = xx_copy+1;
        index = index+1;
    }
    Calculate_X_from_Y__xx = xx_copy;
    Calculate_X_from_Y__yy = new_yy;
}

