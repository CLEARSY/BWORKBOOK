MACHINE
    interlocking

/* Junction interlocking: the interlocking controller.

   Cyclic-executive model of the interlocking of a converging
   junction: two approach signals (A, B), a turnout, and a
   downstream occupancy detector.

   The controller has a single status variable `phase` and two
   operations that alternate under it:

     sense   reads the field's current sensor frame into observed
             state. No precondition on what the field reports:
             sensors may be faulty, can flip, can be inconsistent
             with the controller's previous decisions. The result
             is `phase := acting`.

     act(request)
             computes the signal commands by ANDing the operator's
             request with the current observations: a signal is
             granted only if the request asks for it AND the
             observed field state satisfies the safety conditions.
             The result is `phase := sensing`.

   The safety invariants are **phase-conditional**: they are
   required to hold only when `phase = sensing`, i.e. once act has
   completed and the controller has committed to its outputs.

   Shared types (POSITION, PHASE) live in `ctx`. Read-out of the
   controller state to the operator side is handled by `ihm_bs`,
   imported by the implementation. */

SEES
    ctx

VARIABLES
    sw_sensor,
    occ_sensor,
    sig_A_state,
    sig_B_state,
    phase

INVARIANT
    /* typing - always holds */
    sw_sensor    : POSITION                                          &
    occ_sensor   : BOOL                                              &
    sig_A_state  : BOOL                                              &
    sig_B_state  : BOOL                                              &
    phase        : PHASE                                             &
    /* safety - only required at end of cycle (phase = sensing) */
    (phase = sensing
        => (sig_A_state = TRUE => sw_sensor = pos_left))             &
    (phase = sensing
        => (sig_B_state = TRUE => sw_sensor = pos_right))            &
    (phase = sensing
        => ((sig_A_state = TRUE or sig_B_state = TRUE)
            => occ_sensor = FALSE))

INITIALISATION
    /* fail-safe defaults: before any sensor read, the controller
       assumes the unsafe condition - downstream occupied and switch
       out of control - so no signal can be authorised until a fresh
       sense cycle proves otherwise. */
    sw_sensor    := pos_unknown ||
    occ_sensor   := TRUE        ||
    sig_A_state  := FALSE       ||
    sig_B_state  := FALSE       ||
    phase        := sensing

OPERATIONS

    /* -------------------------------------------------- */
    /* sensing phase  (field -> interlocking)             */
    /* -------------------------------------------------- */

    sense =
        BEGIN
            sw_sensor  :: POSITION   ||
            occ_sensor :: BOOL       ||
            phase      :=  acting
        END;

    /* -------------------------------------------------- */
    /* acting phase  (interlocking -> field)              */
    /* -------------------------------------------------- */

    act(request) =
        PRE
            request : POSITION
        THEN
            sig_A_state := bool(request    = pos_left  &
                                sw_sensor  = pos_left  &
                                occ_sensor = FALSE)                  ||
            sig_B_state := bool(request    = pos_right &
                                sw_sensor  = pos_right &
                                occ_sensor = FALSE)                  ||
            phase       := sensing
        END

END
