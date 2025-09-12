#include "measure.h"
#include <stdlib.h>


void measure__INITIALISATION() {

}

void measure__measure_level(int32_t *m1, int32_t *m2) {
    *m1 = rand() % ctx__TANK_CAPACITY;
    *m2 = rand() % ctx__TANK_CAPACITY;
}

void measure__measure_consumption(int32_t *m1, int32_t *m2, int32_t *m3) {
    *m1 = rand() % ctx__MAX_CONSUMPTION;
    *m2 = rand() % ctx__MAX_CONSUMPTION;
    *m3 = rand() % ctx__MAX_CONSUMPTION;
}