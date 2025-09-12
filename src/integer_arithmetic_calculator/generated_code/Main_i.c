#include <stdio.h>
/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Main.h"

/* Clause IMPORTS */
#include "Integer_arithmetic.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Main__INITIALISATION(void)
{
    
    Integer_arithmetic__INITIALISATION();
}

/* Clause OPERATIONS */

void Main__main(void)
{
    int32_t aa;
    int32_t bb;
    int32_t res;
    int32_t pp;
    
    aa = 5;
    bb = 2;
    res = 35;
    pp = 2;
    printf("aa = %d\n", aa);
    printf("bb = %d\n", bb);
    printf("pp = %d\n", pp);
    Integer_arithmetic__set_a(aa);
    Integer_arithmetic__set_b(bb);
    
    Integer_arithmetic__sum_ab();
    Integer_arithmetic__get_result(&res);
    printf("sum_ab: %d\n", res);
    
    Integer_arithmetic__sub_ab();
    Integer_arithmetic__get_result(&res);
    printf("sub_ab: %d\n", res);
    
    Integer_arithmetic__mul_ab();
    Integer_arithmetic__get_result(&res);
    printf("mul_ab: %d\n", res);
    
    Integer_arithmetic__mod_ab();
    Integer_arithmetic__get_result(&res);
    printf("mod_ab: %d\n", res);
    
    Integer_arithmetic__max_ab();
    Integer_arithmetic__get_result(&res);
    printf("max_ab: %d\n", res);
    
    Integer_arithmetic__pow_a(pp);
    Integer_arithmetic__get_result(&res);
    printf("pow_a: %d\n", res);
}