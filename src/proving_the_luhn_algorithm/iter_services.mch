MACHINE
    iter_services

ABSTRACT_VARIABLES
    Todo,
    Done

INVARIANT    
    Todo <: (0..15) &
    Done <: (0..15) &
    Todo \/ Done = (0..15) &
    Todo /\ Done = {}

INITIALISATION
    
    Todo := (0..15) ||
    Done := {}

OPERATIONS
    flag <-- init_iter =
    BEGIN
        Todo := (0..15) ||
        Done := {} ||
        flag := bool ((0..15) /= {})
    END
    ;
    
    flag, elt <-- next_iter =
    PRE
        Todo /= {}
    THEN
        ANY
            chosen,
            new_Todo
        WHERE
            chosen : NAT &
            chosen : Todo &
            new_Todo = Todo - {chosen}
        THEN
            Todo := new_Todo ||
            Done := Done \/ {chosen} ||
            flag := bool (new_Todo /= {}) ||
            elt := chosen
        END
    END

END
