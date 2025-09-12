#include <stdio.h>
#include "Calculate_X_from_Y.h"

int main(void)
{
    Calculate_X_from_Y__INITIALISATION();
    printf("Initialization: xx = %d and yy = %d\n", Calculate_X_from_Y__xx, Calculate_X_from_Y__yy);
    const int new_yy = 12;
    printf("Calculate new value of xx when yy = %d\n", new_yy);
    Calculate_X_from_Y__calculate_new_x(new_yy);
    printf("After calculate new X: xx = %d yy = %d\n", Calculate_X_from_Y__xx, Calculate_X_from_Y__yy);
}