MACHINE
    max_array

SEES
    ctx
    
OPERATIONS 
    maxi <-- getMaximum (array) =
    PRE
        array : (0..10) --> NAT
    THEN
        maxi := max(ran(array))
    END
END
