MACHINE
    utils
CONSTANTS
    map,
    length,
    even_indexes,
    odd_indexes
PROPERTIES
    map : (0..9) >->> (0..9) &
    dom(map) = 0..9 &
    ran(map) = 0..9 &
    map = {0 |-> 0, 1 |-> 2, 2 |-> 4, 3 |-> 6, 4 |-> 8,
            5 |-> 1, 6 |-> 3, 7 |-> 5, 8 |-> 7, 9 |-> 9} &
    length = 15 &
    even_indexes = {0, 2, 4, 6, 8, 10, 12, 14} &
    odd_indexes = {1, 3, 5, 7, 9, 11, 13, 15} &
    even_indexes \/ odd_indexes = (0..length)
OPERATIONS
    is_valid <-- validate_card(card_numbers) =
    PRE
        card_numbers : (0..length) --> (0..9) &
        dom(card_numbers) = 0..length &
        ran(card_numbers) <: 0..9
    THEN
        ASSERT
            dom(card_numbers;map) = dom(card_numbers) &
            ran(card_numbers) <: dom(map) &
            odd_indexes <: dom(card_numbers)
        THEN
            is_valid := bool ((SIGMA(xx).(xx : even_indexes | (card_numbers; map)(xx)) +
            SIGMA(xx).(xx : odd_indexes | card_numbers(xx))) mod 10 = 0)
        END
    END
ASSERTIONS
    {0,1,2,3,4,5,6,7,8,9} = 0..9
END
