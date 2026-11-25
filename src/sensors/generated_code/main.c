#include <stdio.h>
#include "sctx.h"
#include "sensor_store.h"

/* Prints the content of the store, using only the operations of sensor_store:
   query may only be called on a sensor that has a value (its precondition),
   so is_known is called first. */
static void print_store(void)
{
    for (int32_t i = 0; i <= sctx__NBSENSOR; i++) {
        bool known;
        sensor_store__is_known(i, &known);
        if (known) {
            int32_t value;
            sensor_store__query(i, &value);
            printf("Sensor %d : %d\n", i, value);
        } else {
            printf("Sensor %d : undefined\n", i);
        }
    }
}

int main(void){

    sensor_store__INITIALISATION();

    printf("initialisation :\n");
    print_store();

    sensor_store__set_one(2, 123);
    printf("\nset_one(2,123) :\n");
    print_store();

    sensor_store__clear();
    printf("\nclear :\n");
    print_store();

    return 0;
}
