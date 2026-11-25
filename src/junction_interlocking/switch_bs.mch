MACHINE
    switch_bs

/* Basic machine modelling the junction's turnout, which is both
   sensed and actuated by the interlocking. In B the operations
   below are abstract; their C realisation (provided by hand-written
   code) maintains the simulated physical state of the point motor:
   a target position, a countdown of cycles until motion completes,
   an optional fault-injection mode for sensor lies. */

SEES
    ctx

OPERATIONS

    /* read the current sensed position of the turnout */
    pos <-- read_switch =
        BEGIN
            pos :: POSITION
        END;

    /* command the point motor to start moving towards the left
       stable position. The B body is skip; the C side starts a
       countdown after which read_switch will report pos_left. */
    move_to_left =
        skip;

    /* mirror, towards the right stable position */
    move_to_right =
        skip

END
