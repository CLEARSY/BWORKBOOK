/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Integer_arithmetic.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

static int32_t Integer_arithmetic__aa;
static int32_t Integer_arithmetic__bb;
static int32_t Integer_arithmetic__result;
/* Clause INITIALISATION */
void Integer_arithmetic__INITIALISATION(void)
{
    
    Integer_arithmetic__aa = 0;
    Integer_arithmetic__bb = 0;
    Integer_arithmetic__result = 0;
}

/* Clause OPERATIONS */

void Integer_arithmetic__set_a(int32_t xx)
{
    Integer_arithmetic__aa = xx;
}

void Integer_arithmetic__set_b(int32_t xx)
{
    Integer_arithmetic__bb = xx;
}

void Integer_arithmetic__get_result(int32_t *res)
{
    (*res) = Integer_arithmetic__result;
}

void Integer_arithmetic__sum_ab(void)
{
    Integer_arithmetic__result = Integer_arithmetic__aa+Integer_arithmetic__bb;
}

void Integer_arithmetic__sub_ab(void)
{
    Integer_arithmetic__result = Integer_arithmetic__aa-Integer_arithmetic__bb;
}

void Integer_arithmetic__mul_ab(void)
{
    Integer_arithmetic__result = Integer_arithmetic__aa * Integer_arithmetic__bb;
}

void Integer_arithmetic__div_ab(void)
{
    Integer_arithmetic__result = Integer_arithmetic__aa / Integer_arithmetic__bb;
}

void Integer_arithmetic__mod_ab(void)
{
    Integer_arithmetic__result = Integer_arithmetic__aa % Integer_arithmetic__bb;
}

void Integer_arithmetic__pow_a(int32_t pp)
{
    Integer_arithmetic__result = b_pow(Integer_arithmetic__aa,pp);
}

void Integer_arithmetic__max_ab(void)
{
    if((Integer_arithmetic__aa) >= (Integer_arithmetic__bb))
    {
        Integer_arithmetic__result = Integer_arithmetic__aa;
    }
    else
    {
        Integer_arithmetic__result = Integer_arithmetic__bb;
    }
}

