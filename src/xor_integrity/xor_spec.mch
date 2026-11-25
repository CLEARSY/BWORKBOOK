MACHINE
    xor_spec

ABSTRACT_CONSTANTS
    bitwise_xor_uint16

CONCRETE_CONSTANTS
    uint16_t

PROPERTIES
    uint16_t = 0 .. 65535 &

    bitwise_xor_uint16 : uint16_t * uint16_t --> uint16_t &

    /* commutative */
    ! ( xx , yy ) . ( xx : uint16_t & yy : uint16_t
        => bitwise_xor_uint16 ( xx , yy ) = bitwise_xor_uint16 ( yy , xx ) ) &

    /* associative */
    ! ( xx , yy , zz ) . ( xx : uint16_t & yy : uint16_t & zz : uint16_t
        => bitwise_xor_uint16 ( bitwise_xor_uint16 ( xx , yy ) , zz )
         = bitwise_xor_uint16 ( xx , bitwise_xor_uint16 ( yy , zz ) ) ) &

    /* 0 is neutral */
    ! ( xx ) . ( xx : uint16_t
        => bitwise_xor_uint16 ( xx , 0 ) = xx ) &

    /* every word is its own inverse */
    ! ( xx ) . ( xx : uint16_t
        => bitwise_xor_uint16 ( xx , xx ) = 0 )

ASSERTIONS
    /* the round trip: encipher then decipher with the same key */
    ! ( xx , kk ) . ( xx : uint16_t & kk : uint16_t
        => bitwise_xor_uint16 ( bitwise_xor_uint16 ( xx , kk ) , kk ) = xx )

END
