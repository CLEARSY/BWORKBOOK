/* WARNING if type checker is not performed, translation could contain errors ! */

#include "interlocking.h"

/* Clause SEES */
#include "ctx.h"

/* Clause IMPORTS */
#include "switch_bs.h"
#include "track_bs.h"
#include "ihm_bs.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

static ctx__POSITION interlocking__sw_sensor;
static bool interlocking__occ_sensor;
static bool interlocking__sig_A_state;
static bool interlocking__sig_B_state;
static ctx__PHASE interlocking__phase;
/* Clause INITIALISATION */
void interlocking__INITIALISATION(void)
{
    
    ihm_bs__INITIALISATION();
    switch_bs__INITIALISATION();
    track_bs__INITIALISATION();
    interlocking__sw_sensor = ctx__pos_unknown;
    interlocking__occ_sensor = true;
    interlocking__sig_A_state = false;
    interlocking__sig_B_state = false;
    interlocking__phase = ctx__sensing;
}

/* Clause OPERATIONS */

void interlocking__sense(void)
{
    switch_bs__read_switch(&interlocking__sw_sensor);
    track_bs__read_track(&interlocking__occ_sensor);
    interlocking__phase = ctx__acting;
}

void interlocking__act(ctx__POSITION request)
{
    if(((request == ctx__pos_left) &&
        (interlocking__sw_sensor == ctx__pos_left)) &&
    (interlocking__occ_sensor == false))
    {
        interlocking__sig_A_state = true;
    }
    else
    {
        interlocking__sig_A_state = false;
    }
    if(((request == ctx__pos_right) &&
        (interlocking__sw_sensor == ctx__pos_right)) &&
    (interlocking__occ_sensor == false))
    {
        interlocking__sig_B_state = true;
    }
    else
    {
        interlocking__sig_B_state = false;
    }
    if((request == ctx__pos_left) &&
    ((interlocking__sw_sensor) != (ctx__pos_left)))
    {
        switch_bs__move_to_left();
    }
    if((request == ctx__pos_right) &&
    ((interlocking__sw_sensor) != (ctx__pos_right)))
    {
        switch_bs__move_to_right();
    }
    interlocking__phase = ctx__sensing;
    ihm_bs__set_disp_sw(interlocking__sw_sensor);
    ihm_bs__set_disp_sig_A(interlocking__sig_A_state);
    ihm_bs__set_disp_sig_B(interlocking__sig_B_state);
}

