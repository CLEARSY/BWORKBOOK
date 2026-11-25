/* File: track_bs.c

   Hand-written implementation of the track_bs basic machine.
   The B model declares read_track as an abstract side-effect that
   returns any BOOL; this file gives it a deterministic test value.

   In a real interlocking, this function would read the track
   circuit (or axle counter) for the downstream section and return
   TRUE when a train is detected on it. For the chapter demo the
   track is always reported free (FALSE) so the controller has
   nothing blocking it from authorising signals once the switch
   reaches the requested stable position. */

#include "track_bs.h"

void track_bs__INITIALISATION(void)
{
    /* no controller-side state for this sensor */
}

void track_bs__read_track(bool *occ)
{
    *occ = false;
}
