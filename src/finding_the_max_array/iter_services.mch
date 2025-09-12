MACHINE
    iter_services

SEES
    ctx
    
ABSTRACT_VARIABLES
    Todo,
    Done

INVARIANT    
    Todo <: (0..NN) &
    Done <: (0..NN) &
    Todo \/ Done = (0..NN) &
    Todo /\ Done = {}

INITIALISATION
    
    Todo := (0..NN) ||
    Done := {}

OPERATIONS
    flag <-- init_iter =
    BEGIN
        Todo := (0..NN) ||
        Done := {} ||
        flag := bool ((0..NN) /= {})
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
