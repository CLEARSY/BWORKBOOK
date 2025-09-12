MACHINE
   Name

   SETS

     Set1;
     Set2 = { Value1, Value2, ... };
     ...

   ABSTRACT_CONSTANTS

     Constant1,
     Constant2,
     ...

   PROPERTIES

     Constant1 : Set3 &
     Constant2 : Set4 &
     ...

   ABSTRACT_VARIABLES

     Variable1,
     Variable2,
     ...

   INVARIANT

     Variable1 : Set5 &
     Variable2 : Set6 &
     ...

   INITIALISATION

     Variable1 := Value3 ||
     Variable2 := Value4 ||
     ...

   OPERATIONS

     res1, res2, ... <-- op1 (param1, param2, ...) =
     PRE
       param1 : Set7 &
       param2 : Set8 &
       ...
     THEN
       res1 := Value5 ||
       res2 := Value6 ||
       ...
     END
     ;

     res3, res4, ... <-- op2 (param3, param4, ...) =
     PRE
       param3 : Set9 &
       param4 : Set10 &
       ...
     THEN
        substitution1 ||
        substitution2 ||
       ...
     END

END