/* WARNING if type checker is not performed, translation could contain errors ! */

#include "block.h"

/* Clause IMPORTS */
#include "acquisition_bs.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */

const block__BLOCKS block__NEXT[block__BLOCKS__max+1] = {1,2,3,0};
/* Clause CONCRETE_VARIABLES */

static block__PHASE block__phase_i;
static bool block__occupied_i[4];
static bool block__signals_red_i[4];
/* Clause INITIALISATION */
void block__INITIALISATION(void)
{
    
    unsigned int i = 0;
    acquisition_bs__INITIALISATION();
    block__phase_i = block__ACQUISITION;
    for(i = 0; i <= 3;i++)
    {
        block__occupied_i[i] = true;
    }
    for(i = 0; i <= 3;i++)
    {
        block__signals_red_i[i] = true;
    }
}

/* Clause OPERATIONS */

void block__actualise_occupation(void)
{
    {
        bool bb0;
        bool bb1;
        bool bb2;
        bool bb3;
        
        acquisition_bs__capteur0(&bb0);
        block__occupied_i[0] = bb0;
        acquisition_bs__capteur1(&bb1);
        block__occupied_i[1] = bb1;
        acquisition_bs__capteur2(&bb2);
        block__occupied_i[2] = bb2;
        acquisition_bs__capteur3(&bb3);
        block__occupied_i[3] = bb3;
    }
    block__phase_i = block__CONTROLE;
}

void block__controle_light(void)
{
    block__signals_red_i[0] = block__occupied_i[0];
    block__signals_red_i[1] = block__occupied_i[1];
    block__signals_red_i[2] = block__occupied_i[2];
    block__signals_red_i[3] = block__occupied_i[3];
    block__phase_i = block__ACQUISITION;
}

void block__is_occupied(block__BLOCKS xx, bool *bb)
{
    (*bb) = block__occupied_i[xx];
}

void block__is_red(block__BLOCKS xx, bool *bb)
{
    (*bb) = block__signals_red_i[xx];
}

