#include "acquisition_bs.h"
#include <stdlib.h>

void acquisition_bs__INITIALISATION(){}

void acquisition_bs__capteur0(bool *aa){
    *aa = rand()%2;
}

void acquisition_bs__capteur1(bool *aa){
    *aa = rand()%2;
}

void acquisition_bs__capteur2(bool *aa){
    *aa = rand()%2;
}

void acquisition_bs__capteur3(bool *aa){
    *aa = rand()%2;
}
