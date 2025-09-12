#include <stdio.h>
#include "switch.h"

void printPosition(switch__POSITION pos) {
    switch(pos) {
        case switch__normal:    printf(" normal"); break;   // 0
        case switch__reverse:   printf("reverse"); break;   // 1
        case switch__void:      printf("   void"); break;   // 2
    }
}

int main (void) {

    switch__POSITION m1;
    switch__POSITION m2;
    switch__POSITION m3;
    switch__POSITION pos;
    switch__POSITION *ppos = &pos;
    
    printf("+==========+==========+==========++===========+\n");
    printf("|    m1    |    m2    |    m3    ||    pos    |\n");
    printf("+==========+==========+==========++===========+\n");

    for(m1 = 0; m1 < 3; m1++) {
        for(m2 = 0; m2 < 3; m2++) {
            for(m3 = 0; m3 < 3; m3++) {
                switch__estimate(m1, m2, m3, ppos);
                printf("|  ");printPosition(m1);printf(" |  ");printPosition(m2);printf(" |  ");printPosition(m3);printf(" ||   ");printPosition(pos);printf(" |\n");               
            }
        }
    }

    printf("+==========+==========+==========++===========+\n");

    return 0;
}