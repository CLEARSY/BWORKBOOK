#include <stdio.h>
#include "block.h"

/* Prints the state of each block, using only the operations of block. */
static void print_blocks(void)
{
    printf("        | Occupied | Red\n");
    for (block__BLOCKS xx = 0; xx <= block__BLOCKS__max; xx++) {
        bool occupied;
        bool red;
        block__is_occupied(xx, &occupied);
        block__is_red(xx, &red);
        printf("Block %d | %d        | %d\n", xx, occupied, red);
    }
}

int main(void){

    printf("    initialisation\n");
    block__INITIALISATION();
    print_blocks();

    printf("\n    actualise_occupation\n");
    block__actualise_occupation();
    print_blocks();

    printf("\n    controle_light\n");
    block__controle_light();
    print_blocks();

    return 0;
}
