MACHINE
    sensor_store
SEES
    sctx
VARIABLES
    reading
INVARIANT
    reading : (0..NBSENSOR) +-> (0..MAXVAL)
INITIALISATION
    reading := {}
OPERATIONS
    
    set_one(ss, vv) =
    PRE
        ss : 0..NBSENSOR &
        vv : 0..MAXVAL
    THEN
        reading := reading <+ {ss |-> vv}
    END ;
    
    vv <-- query(ss) =
    PRE
        ss : 0..NBSENSOR &
        ss : dom(reading)
    THEN
        vv := reading(ss)
    END ;

    bb <-- is_known(ss) =
    PRE
        ss : 0..NBSENSOR
    THEN
        bb := bool(ss : dom(reading))
    END ;

    clear =
    BEGIN
        reading := {}
    END
    
END
