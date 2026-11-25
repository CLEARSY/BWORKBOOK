/* File: switch_bs.c

   Hand-written implementation of the switch_bs basic machine.
   The B model declares read_switch / move_to_left / move_to_right
   as abstract side-effects; this file provides their C realisation.

   The simulator tracks the *physical* state of the turnout
   (actual_pos), the *commanded* target (target_pos) and a
   countdown of read_switch ticks remaining before the motion
   completes. While the countdown is positive, read_switch reports
   pos_unknown ("hors controle"); once the countdown reaches zero,
   actual_pos is updated to target_pos and the sensor reports the
   new stable position.

   A fault-injection mode is exposed via the global
   switch_bs__fault_period: when set to a positive integer N, every
   Nth call to read_switch lies and reports pos_unknown regardless
   of the actual state. This lets the demo show how the formally
   proven interlocking handles transient sensor faults safely. */

#include "switch_bs.h"
#include <stdio.h>

/* Number of read_switch ticks needed for the physical motor to
   complete a move from one stable position to the other. */
#define MOVE_COUNT 3

static ctx__POSITION actual_pos    = ctx__pos_unknown;
static ctx__POSITION target_pos    = ctx__pos_unknown;
static int           move_countdown = 0;

/* Public flag for the test harness: 0 = no faults, N>0 = every
   Nth read lies and returns pos_unknown. Default off. */
int switch_bs__fault_period = 0;
static int read_counter = 0;

void switch_bs__INITIALISATION(void)
{
    actual_pos     = ctx__pos_unknown;
    target_pos     = ctx__pos_unknown;
    move_countdown = 0;
    read_counter   = 0;
}

void switch_bs__read_switch(ctx__POSITION *pos)
{
    /* advance the physical motion */
    if (move_countdown > 0) {
        move_countdown--;
        if (move_countdown == 0) {
            actual_pos = target_pos;
        }
    }

    /* fault injection */
    read_counter++;
    if (switch_bs__fault_period > 0
        && (read_counter % switch_bs__fault_period) == 0) {
        *pos = ctx__pos_unknown;
        printf("    [switch_bs] FAULT INJECTION: reporting pos_unknown (actual is %d)\n",
               actual_pos);
        return;
    }

    /* during motion the position is not yet controlled */
    if (move_countdown > 0) {
        *pos = ctx__pos_unknown;
    } else {
        *pos = actual_pos;
    }
}

void switch_bs__move_to_left(void)
{
    /* idempotent: if the motor is already aimed at pos_left
       (settled there OR still travelling there), do nothing.
       Re-issuing the command would otherwise reset the countdown
       and the move would never complete. */
    if (target_pos == ctx__pos_left) {
        return;
    }
    target_pos     = ctx__pos_left;
    move_countdown = MOVE_COUNT;
    printf("    [switch_bs] motor command: move_to_left (will take %d ticks)\n",
           MOVE_COUNT);
}

void switch_bs__move_to_right(void)
{
    if (target_pos == ctx__pos_right) {
        return;
    }
    target_pos     = ctx__pos_right;
    move_countdown = MOVE_COUNT;
    printf("    [switch_bs] motor command: move_to_right (will take %d ticks)\n",
           MOVE_COUNT);
}
