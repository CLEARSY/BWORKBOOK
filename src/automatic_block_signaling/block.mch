MACHINE
    block
 
SETS
    SIGNALS;
    BLOCKS;
    PHASE = {ACQUISITION, CONTROLE}
    
CONSTANTS
    NEXT
    
PROPERTIES
    NEXT : BLOCKS --> BLOCKS &
    NEXT~ : BLOCKS --> BLOCKS
    
VARIABLES
    occupied,
    signals_red,
    phase
    
INVARIANT
    occupied <: BLOCKS &
    signals_red <: BLOCKS &
    phase : PHASE &
    !xx.(xx : occupied & phase = ACQUISITION => xx : signals_red)
    
INITIALISATION
    phase := ACQUISITION   ||
    occupied := BLOCKS     ||
    signals_red := BLOCKS
    
OPERATIONS
    
    actualise_occupation =
        PRE phase = ACQUISITION THEN
            ANY occ WHERE
                occ <: BLOCKS
            THEN
                occupied := occ
            END ||
            phase := CONTROLE      
        END;
    
    controle_light =
        PRE phase = CONTROLE THEN
            signals_red := occupied ||
            phase := ACQUISITION
        END;

    bb <-- is_occupied(xx) =
        PRE xx : BLOCKS THEN
            bb := bool(xx : occupied)
        END;

    bb <-- is_red(xx) =
        PRE xx : BLOCKS THEN
            bb := bool(xx : signals_red)
        END

END