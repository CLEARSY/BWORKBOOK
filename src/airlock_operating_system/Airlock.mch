MACHINE
    Airlock
SEES 
    Airlock_pressure_bs
SETS
    PHASE = {ACQ, CTRL}
VARIABLES
    airlock_pressure,
    is_indoor_door_openable,
    is_outdoor_door_openable,
    cycle
INVARIANT
    airlock_pressure : PRESSURE &
    is_indoor_door_openable : BOOL &
    is_outdoor_door_openable : BOOL &
    cycle : PHASE &
    not(is_indoor_door_openable = TRUE & is_outdoor_door_openable = TRUE)
INITIALISATION
    airlock_pressure :: PRESSURE ||
    is_indoor_door_openable := FALSE ||
    is_outdoor_door_openable := FALSE ||
    cycle := ACQ
OPERATIONS

    actualize_pressure =
    PRE
        cycle = ACQ
    THEN
        airlock_pressure :: PRESSURE ||
        cycle := CTRL
    END;
    
    enable_doors_opening =
    PRE
        cycle = CTRL
    THEN
        is_indoor_door_openable, is_outdoor_door_openable: ( 
            is_indoor_door_openable: BOOL & 
            is_outdoor_door_openable: BOOL & 
            (is_indoor_door_openable = TRUE => airlock_pressure = indoor_pressure) & 
            (is_outdoor_door_openable = TRUE => airlock_pressure = outdoor_pressure)  
        ) ||
        cycle := ACQ
    END;

    ret <-- get_airlock_pressure =
    PRE
        ret : PRESSURE
    THEN
        ret := airlock_pressure
    END;

    ret <-- get_is_indoor_door_openable=
    PRE
        ret : BOOL
    THEN
        ret := is_indoor_door_openable
    END;
    
    ret <-- get_is_outdoor_door_openable=
    PRE
        ret : BOOL
    THEN
        ret := is_outdoor_door_openable
    END;

    ret <-- get_cycle =
    PRE
        ret : PHASE
    THEN
        ret := cycle
    END

END
