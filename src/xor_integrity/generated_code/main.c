#include "stdio.h"
#include "stdlib.h"
#include "link_app.h"

int main(void){

    uint16_t msg1;
    uint16_t msg2;
    bool accepted;

    for(int i = 0; i < 10 ; i++){
        msg1 = rand()%0x10000;
        msg2 = msg1^link_receiver__LINK_KEY;
        if(rand()%2){
            msg1 ^= 0x0001;
            printf("bit flip: ");
        }
        else{
            printf("          ");
        }
        link_receiver__receive_frame(msg1,msg2);
        link_receiver__frame_accepted(&accepted);
        printf("msg1: %04x, msg2: %04x, xor(msg1,msg2): %04x, frame_accepted: %d.\n",msg1,msg2,msg1^msg2,accepted);
    }

    return 0;
}