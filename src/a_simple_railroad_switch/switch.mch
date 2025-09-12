MACHINE switch
SETS
    POSITION = {normal,reverse,void}
OPERATIONS
pos <-- estimate(m1,m2,m3) =
    PRE
        m1: POSITION &
        m2: POSITION &
        m3: POSITION
    THEN
        pos:(
            pos: POSITION &
            (pos = normal => (normal: {m1,m2,m3} & reverse /: {m1,m2,m3})) &
            (pos = reverse => (reverse: {m1,m2,m3} & normal /: {m1,m2,m3}))
        )
    END
END