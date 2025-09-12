MACHINE
    Calculate_X_from_Y

CONCRETE_VARIABLES
    xx, yy

INVARIANT
    xx : INT &
    yy : INT &
    yy < (MAXINT - 3) &
    xx = yy + 3

INITIALISATION
    xx := 3 ||
    yy := 0

OPERATIONS
   calculate_new_x (new_yy) =
   PRE
       new_yy : INT &
       new_yy < (MAXINT - 3)
   THEN
      yy := new_yy ||
      xx := new_yy + 3
   END
END