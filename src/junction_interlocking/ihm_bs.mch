MACHINE
    ihm_bs

/* Basic machine modelling the operator-side IHM/display. It caches
   the most recently observed controller state so the upper layer
   (here: the C test harness) can read it.

   The interlocking pushes its state to this machine on every
   `sense` cycle via the `set_*` operations; the harness retrieves
   it via the `get_*` operations.

   Separating this from the interlocking machine keeps the
   safety-critical logic free of IHM concerns. */

SEES
    ctx

VARIABLES
    disp_sig_A,
    disp_sig_B,
    disp_sw

INVARIANT
    disp_sig_A : BOOL     &
    disp_sig_B : BOOL     &
    disp_sw    : POSITION

INITIALISATION
    disp_sig_A := FALSE       ||
    disp_sig_B := FALSE       ||
    disp_sw    := pos_unknown

OPERATIONS

    /* push the controller's latest state into the display cache */

    set_disp_sig_A(state) =
        PRE
            state : BOOL
        THEN
            disp_sig_A := state
        END;

    set_disp_sig_B(state) =
        PRE
            state : BOOL
        THEN
            disp_sig_B := state
        END;

    set_disp_sw(new_pos) =
        PRE
            new_pos : POSITION
        THEN
            disp_sw := new_pos
        END;

    /* IHM-side queries (used by the C harness) */

    ret <-- get_sig_A_state =
        PRE
            ret : BOOL
        THEN
            ret := disp_sig_A
        END;

    ret <-- get_sig_B_state =
        PRE
            ret : BOOL
        THEN
            ret := disp_sig_B
        END;

    ret <-- get_sw_sensor =
        PRE
            ret : POSITION
        THEN
            ret := disp_sw
        END

END
