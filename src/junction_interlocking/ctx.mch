MACHINE
    ctx

/* Context machine for the junction-interlocking sandbox.
   Holds shared types (and, in later chapters, shared constants)
   that the controller will SEE.

   Convention: in B-Workbook style, sets/constants live in a
   dedicated context machine separate from the controller logic.

   The POSITION values are prefixed with `pos_` because `left`
   and `right` are reserved B sequence operators. */

SETS
    POSITION = {pos_left, pos_right, pos_unknown};
    PHASE    = {sensing, acting}

END
