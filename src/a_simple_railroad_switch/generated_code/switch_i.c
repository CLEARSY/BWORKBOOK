/* WARNING if type checker is not performed, translation could contain errors ! */

#include "switch.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void switch__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void switch__estimate(switch__POSITION m1, switch__POSITION m2, switch__POSITION m3, switch__POSITION *pos)
{
    switch(m1)
    {
        case switch__normal : {
            
            if((m2 == switch__reverse) ||
            (m3 == switch__reverse))
            {
                (*pos) = switch__void;
            }
            else
            {
                (*pos) = switch__normal;
            }
            break;
        }
        case switch__reverse : {
            
            if((m2 == switch__normal) ||
            (m3 == switch__normal))
            {
                (*pos) = switch__void;
            }
            else
            {
                (*pos) = switch__reverse;
            }
            break;
        }
        default : {
            
            switch(m2)
            {
                case switch__normal : {
                    
                    if(m3 == switch__reverse)
                    {
                        (*pos) = switch__void;
                    }
                    else
                    {
                        (*pos) = switch__normal;
                    }
                    break;
                }
                case switch__reverse : {
                    
                    if(m3 == switch__normal)
                    {
                        (*pos) = switch__void;
                    }
                    else
                    {
                        (*pos) = switch__reverse;
                    }
                    break;
                }
                default : {
                    
                    switch(m3)
                    {
                        case switch__normal : {
                            
                            (*pos) = switch__normal;
                            break;
                        }
                        case switch__reverse : {
                            
                            (*pos) = switch__reverse;
                            break;
                        }
                        case switch__void : {
                            
                            (*pos) = switch__void;
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
    }
}

