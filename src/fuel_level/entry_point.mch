MACHINE
    entry_point
    
SETS
   ALARM_STATUS = {NOMINAL, LOW_LEVEL}

OPERATIONS
    compute_initial_level_entry_point = skip;
    
    compute_remaining_fuel_entry_point = skip;
    
    estimated_lvl <-- get_estimated_level_entry_point =
    BEGIN
        estimated_lvl :: NAT
    END;
   
    status_1 <-- get_status_entry_point =
    BEGIN
        status_1 :: ALARM_STATUS
    END;
   
    estimated_cmpt <-- get_estimated_consumption_entry_point =
    BEGIN
        estimated_cmpt :: NAT
    END
END
