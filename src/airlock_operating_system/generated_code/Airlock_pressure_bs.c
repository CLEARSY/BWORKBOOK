#include "Airlock_pressure_bs.h"
#include <stdlib.h>

void Airlock_pressure_bs__get_pressure(Airlock_pressure_bs__PRESSURE *pres) {
    int random_value = rand() % Airlock_pressure_bs__PRESSURE__max;

    switch (random_value) {
        case 0:
            *pres = Airlock_pressure_bs__indoor_pressure;
            break;
        case 1:
            *pres = Airlock_pressure_bs__outdoor_pressure;
            break;
        default:
            *pres = Airlock_pressure_bs__other_pressure;
            break;
    }
}