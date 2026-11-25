MACHINE
    track_bs

/* Basic machine modelling the downstream track-occupancy detector.
   Sensor only, no actuator: the interlocking cannot decide whether
   a train enters the section, only observe it. */

OPERATIONS

    occ <-- read_track =
        BEGIN
            occ :: BOOL
        END

END
