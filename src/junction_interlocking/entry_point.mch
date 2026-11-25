MACHINE
    entry_point

/* Top-level component, called from C main(). Wraps one full cycle
   of the interlocking (sense then act) into a single callable.
   The C harness loops `run_cycle(request)` and reads back the
   current controller state via the `ihm_bs` basic machine. */

SEES
    ctx

OPERATIONS

    run_cycle(request) =
        PRE
            request : POSITION
        THEN
            skip
        END

END
