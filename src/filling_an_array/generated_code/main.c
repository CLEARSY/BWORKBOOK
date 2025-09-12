#include "entry_point.h"
#include <stdio.h>
#include <stdint.h>

int main() {

    entry_point__INITIALISATION();

    printf("The initial content of the array is: ");
    for (int i = 0; i <= ctx__NN; i++) {
        printf("%d ", array__Array[i]);
    }
    printf("\n");

    entry_point__op();
    printf("The content of the array after calling 'set_array_value' operation is: ");
    for (int i = 0; i <= ctx__NN; i++) {
        printf("%d ", array__Array[i]);
    }
    printf("\n");
}
