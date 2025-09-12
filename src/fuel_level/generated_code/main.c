#include "entry_point.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    // Seed the random number generator
    srand(55);

    entry_point__INITIALISATION();
    entry_point__compute_initial_level_entry_point();

    int32_t estimated_lvl;
    entry_point__get_estimated_level_entry_point(&estimated_lvl);
    printf("The initial fuel level is: %d\n", estimated_lvl);

    for (int i = 0; i < 10; i++) {
        entry_point__compute_remaining_fuel_entry_point();
        entry_point__get_estimated_level_entry_point(&estimated_lvl);

        int32_t estimated_consumption;
        entry_point__get_estimated_consumption_entry_point(&estimated_consumption);

        ctx__ALARM_STATUS status;
        entry_point__get_status_entry_point(&status);

        printf("The estimated fuel level after cycle %d is: %d \n", i + 1, estimated_lvl);
        printf("With a estimated consumption of: %d \n", estimated_consumption);
        printf("The alarm status is: %s \n", (status == 1 ? "LOW_LEVEL" : "NOMINAL"));
        printf("=========================================\n");
    }
}
