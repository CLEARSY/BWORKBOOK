
MACHINE
    xor_ops

SEES
    xor_spec

OPERATIONS

    res <-- xor16 ( aa , bb ) =
    PRE
        aa : uint16_t &
        bb : uint16_t
    THEN
        res := bitwise_xor_uint16 ( aa , bb )
    END

END
