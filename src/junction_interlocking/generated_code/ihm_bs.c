/* File: ihm_bs.c

   Hand-written implementation of the ihm_bs basic machine.
   This is the operator-side cache: the interlocking pushes its
   current state in via set_disp_*, and the C harness (or a real
   IHM/SCADA front-end) reads it back via get_*.

   In a deployed system this code would talk to the actual HMI
   surface (mimic board, supervisory tool, audit log). Here it
   simply mirrors the state into module-static variables. */

#include "ihm_bs.h"

static bool          cached_sig_A = false;
static bool          cached_sig_B = false;
static ctx__POSITION cached_sw    = ctx__pos_unknown;

void ihm_bs__INITIALISATION(void)
{
    /* fail-safe defaults: see the matching comments in
       interlocking.mch. Until the controller pushes its first
       update, the IHM displays "no authority, position unknown". */
    cached_sig_A = false;
    cached_sig_B = false;
    cached_sw    = ctx__pos_unknown;
}

void ihm_bs__set_disp_sig_A(bool state)
{
    cached_sig_A = state;
}

void ihm_bs__set_disp_sig_B(bool state)
{
    cached_sig_B = state;
}

void ihm_bs__set_disp_sw(ctx__POSITION new_pos)
{
    cached_sw = new_pos;
}

void ihm_bs__get_sig_A_state(bool *ret)
{
    *ret = cached_sig_A;
}

void ihm_bs__get_sig_B_state(bool *ret)
{
    *ret = cached_sig_B;
}

void ihm_bs__get_sw_sensor(ctx__POSITION *ret)
{
    *ret = cached_sw;
}
