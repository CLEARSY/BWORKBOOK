MACHINE
    link_receiver

SEES
    xor_spec

CONCRETE_CONSTANTS
    LINK_KEY

PROPERTIES
    LINK_KEY : uint16_t

ABSTRACT_VARIABLES
    link_accepted ,
    payload_word ,
    guard_word

INVARIANT
    link_accepted : BOOL &
    payload_word : uint16_t &
    guard_word : uint16_t &

    /* an accepted frame carries two messages that agree:
       the guard is exactly the payload enciphered with the link key */
    ( link_accepted = TRUE
        =>  guard_word = bitwise_xor_uint16 ( payload_word , LINK_KEY ) )

ASSERTIONS
    /* no false alarm: a frame built by the rules always passes the test */
    ! ( datum ) . ( datum : uint16_t
        =>  bitwise_xor_uint16 ( datum , bitwise_xor_uint16 ( datum , LINK_KEY ) ) = LINK_KEY )

INITIALISATION
    link_accepted := FALSE ||
    payload_word := 0 ||
    guard_word := 0

OPERATIONS

    receive_frame ( msg_one , msg_two ) =
    PRE
        msg_one : uint16_t &
        msg_two : uint16_t
    THEN
        IF bitwise_xor_uint16 ( msg_one , msg_two ) = LINK_KEY
        THEN
            link_accepted := TRUE ||
            payload_word := msg_one ||
            guard_word := msg_two
        ELSE
            link_accepted := FALSE
        END
    END ;

    res <-- frame_accepted =
    BEGIN
        res := link_accepted
    END ;

    res <-- retained_payload =
    BEGIN
        res := payload_word
    END

END
