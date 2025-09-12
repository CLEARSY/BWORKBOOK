#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Airlock.h"
#include "Airlock_pressure_bs.h"

int main(void) {
    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Initialize the modules
    Airlock__INITIALISATION();

    // Variables to read the results
    Airlock_pressure_bs__PRESSURE pressure;
    bool indoor_openable;
    bool outdoor_openable;
    Airlock__PHASE phase;

    // Loop to simulate several cycles
    for (int i = 0; i < 10; i++) {
        printf("Cycle %d :\n", i + 1);

       

        // Step 1: Get new pressure value
        Airlock__actualize_pressure();

        Airlock__get_cycle(&phase);
        printf("Cycle Phase: %s\n\n", (phase == Airlock__ACQ) ? "ACQ" : "CTRL");

        // Step 2: Enable door opening based on the pressure
        Airlock__enable_doors_opening();

        

        Airlock__get_airlock_pressure(&pressure);
        Airlock__get_is_indoor_door_openable(&indoor_openable);
        Airlock__get_is_outdoor_door_openable(&outdoor_openable);
        Airlock__get_cycle(&phase);

        // Display results
        const char* pressure_str;
        switch (pressure) {
            case Airlock_pressure_bs__indoor_pressure:
                pressure_str = "Indoor Pressure";
                break;
            case Airlock_pressure_bs__outdoor_pressure:
                pressure_str = "Outdoor Pressure";
                break;
            case Airlock_pressure_bs__other_pressure:
            default:
                pressure_str = "Other Pressure";
                break;
        }

        printf("Pressure: %s\n", pressure_str);
        printf("Indoor Door Openable: %s\n", indoor_openable ? "Yes" : "No");
        printf("Outdoor Door Openable: %s\n", outdoor_openable ? "Yes" : "No");
        printf("Cycle Phase: %s\n\n", (phase == Airlock__ACQ) ? "ACQ" : "CTRL");
    }

    return 0;
}