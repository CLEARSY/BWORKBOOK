#include <stdio.h>
#include "card_input.h"

int main(void){

    card_input__INITIALISATION();

    bool valid = false;
    int32_t card_number1[16] = {1,2,3,4, 5,6,7,8, 9,0,1,2, 3,4,5,2};
    int32_t card_number2[16] = {1,2,3,4, 5,6,7,8, 9,0,1,2, 3,4,5,6};

    card_input__validate_card(card_number1,&valid);
    valid ? printf("card number 1: valid\n") : printf("card number 1: invalid\n");


    card_input__validate_card(card_number2,&valid);
    valid ? printf("card number 2: valid\n") : printf("card number 2: invalid\n");

    return 0;
}
