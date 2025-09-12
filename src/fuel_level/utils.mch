MACHINE utils

OPERATIONS
   rr <-- minimum(aa, bb) =
   PRE
       aa: NAT &
       bb: NAT
   THEN
       rr := min({aa, bb})
   END;

   rr <-- maximum(aa, bb, cc) =
   PRE
       aa: NAT &
       bb: NAT &
       cc: NAT
   THEN
       rr := max({aa, bb, cc})
   END
END