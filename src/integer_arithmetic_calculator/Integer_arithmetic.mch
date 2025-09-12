MACHINE
    Integer_arithmetic
VARIABLES
    aa, bb, result
INVARIANT
    aa : INT &
    bb : INT &
    result : INT
INITIALISATION
    aa :: INT ||
    bb :: INT ||
    result :: INT
OPERATIONS
    /* Setters */
    set_a(xx) =
    PRE xx : INT THEN
        aa : (aa = xx)
    END;
    set_b(xx) =
    PRE xx : INT THEN
        bb : (bb = xx)
    END;
    
    /* Getters */
    res <-- get_result =
    PRE result : INT THEN
        res : (res = result)
    END;
    /* Operations */
    sum_ab =
    PRE aa + bb : INT THEN
        result : (result = aa + bb)
    END;
    sub_ab =
    PRE aa - bb : INT THEN
        result : (result = aa - bb)
    END;
    mul_ab =
    PRE aa * bb : INT THEN
        result : (result = aa * bb)
    END;
    div_ab =
    PRE not(bb = 0) & aa / bb : INT THEN
        result : (result = aa / bb)
    END;
    mod_ab =
    PRE aa >= 0 & bb >= 1 & aa mod bb : INT THEN
        result : (result = aa mod bb)
    END;
    pow_a(pp) =
    PRE pp : NAT & aa**pp : INT THEN
        result : (result = aa ** pp)
    END;
    max_ab =
    BEGIN
        result := max({aa, bb})
    END
END