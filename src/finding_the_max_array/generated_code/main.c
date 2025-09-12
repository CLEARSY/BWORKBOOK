#include "entry_point.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(42);

    entry_point__INITIALISATION();

    int32_t max_array__array[ctx__NN + 1] = {0};
    for (int i = 0; i <= ctx__NN; i++) {
        max_array__array[i] = rand() % ctx__NN;
    }

    printf("Finding the maximum value in an array of integers: ");
    for (int i = 0; i <= ctx__NN; i++) {
        printf("%d ", max_array__array[i]);
    }
    printf("\n");

    int32_t maxi;
    entry_point__get_max(max_array__array, &maxi);
    printf("The maximum is: %d\n", maxi);
}
