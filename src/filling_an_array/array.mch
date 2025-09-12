MACHINE
    array
SEES
    ctx
CONCRETE_VARIABLES
    Array
INVARIANT
    Array : (0..NN) --> NAT
INITIALISATION
    Array := (0..NN) * {0}
OPERATIONS
    set_array_value =
    BEGIN
        Array := id(0..NN)
    END
END