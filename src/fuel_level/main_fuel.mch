MACHINE
    main_fuel
SEES
   ctx
VARIABLES
   estimated_level,
   estimated_consumption,
   status
INVARIANT
   /* Typing */
   estimated_level : 0..TANK_CAPACITY &
   estimated_consumption : 0 ..MAX_CONSUMPTION &
   status : ALARM_STATUS &
   /* Security property */
   (status /= LOW_LEVEL => estimated_level > WARNING_CAPACITY)

INITIALISATION
   estimated_level := 0 ||
   estimated_consumption := 0 ||
   status := LOW_LEVEL
OPERATIONS
   compute_initial_level =
   BEGIN
       estimated_level, status :(
           estimated_level: 0..TANK_CAPACITY &
           status : ALARM_STATUS &
           (status /= LOW_LEVEL => estimated_level > WARNING_CAPACITY))
   END
;
   compute_remaining_fuel =
   BEGIN
       estimated_level, estimated_consumption, status :(
           estimated_level: 0..TANK_CAPACITY &
           estimated_consumption : 0..MAX_CONSUMPTION &
           status : ALARM_STATUS &
           (estimated_level <= estimated_level$0) &
           (status /= LOW_LEVEL => estimated_level > WARNING_CAPACITY))
   END;
   
   estimated_lvl <-- get_estimated_level =
   BEGIN
       estimated_lvl := estimated_level
   END;
   
   status_1 <-- get_status =
   BEGIN
       status_1 := status
   END;
   
   estimated_cmpt <-- get_estimated_consumption =
   BEGIN
       estimated_cmpt := estimated_consumption
   END
END

