/* File: main.c

   Test harness for the junction interlocking. Drives the formally
   proved interlocking through entry_point__run_cycle, then reads
   back the controller's state via ihm_bs (the operator-side cache
   that the interlocking pushes to on every sense).

   The harness exercises two scenarios:

     1) A clean run (no sensor faults). For each requested
        direction (pos_left then pos_right) it loops run_cycle
        until the controller authorises the corresponding signal,
        then prints the convergence count.

     2) A faulted run (every 4th read_switch lies and reports
        pos_unknown). The proven interlocking should still
        converge safely: it never authorises a signal on a
        position it has not freshly observed, so a transient
        sensor fault may delay convergence but never produces
        a green light into a misaligned switch. */

#include "entry_point.h"
#include "ihm_bs.h"
#include <stdio.h>

extern int switch_bs__fault_period;

static const char *position_name(ctx__POSITION p)
{
    switch (p) {
        case ctx__pos_left:    return "pos_left";
        case ctx__pos_right:   return "pos_right";
        case ctx__pos_unknown: return "pos_unknown";
        default:               return "?";
    }
}

static void print_state(int cycle, ctx__POSITION request)
{
    ctx__POSITION sw;
    bool sigA, sigB;
    ihm_bs__get_sw_sensor(&sw);
    ihm_bs__get_sig_A_state(&sigA);
    ihm_bs__get_sig_B_state(&sigB);
    printf("  cycle %2d:  req=%-11s  sw_sensor=%-11s  sigA=%-5s  sigB=%-5s\n",
           cycle, position_name(request), position_name(sw),
           sigA ? "GREEN" : "red",
           sigB ? "GREEN" : "red");
}

static void run_until_converged(ctx__POSITION request, int max_cycles)
{
    printf("\n--- request: %s (max %d cycles) ---\n",
           position_name(request), max_cycles);
    for (int i = 1; i <= max_cycles; i++) {
        entry_point__run_cycle(request);
        print_state(i, request);
        bool sigA, sigB;
        ihm_bs__get_sig_A_state(&sigA);
        ihm_bs__get_sig_B_state(&sigB);
        if ((request == ctx__pos_left  && sigA) ||
            (request == ctx__pos_right && sigB)) {
            printf("  >>> converged after %d cycle(s)\n", i);
            return;
        }
    }
    printf("  >>> did NOT converge in %d cycles\n", max_cycles);
}

int main(void)
{
    entry_point__INITIALISATION();

    printf("=========================================\n");
    printf(" scenario 1: clean run, no sensor faults\n");
    printf("=========================================\n");
    switch_bs__fault_period = 0;
    run_until_converged(ctx__pos_left,  10);
    run_until_converged(ctx__pos_right, 10);

    printf("\n=========================================\n");
    printf(" scenario 2: sensor faults every 4 reads\n");
    printf("=========================================\n");
    switch_bs__fault_period = 4;
    run_until_converged(ctx__pos_left,  20);
    run_until_converged(ctx__pos_right, 20);

    return 0;
}
