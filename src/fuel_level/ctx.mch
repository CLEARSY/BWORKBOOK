MACHINE ctx

SETS
   ALARM_STATUS = {NOMINAL, LOW_LEVEL}

CONCRETE_CONSTANTS
   TANK_CAPACITY,             /* max quantity of fuel in the tank */
   MAX_CONSUMPTION,     /* max quantity of fuel consumed in a cycle */
   WARNING_CAPACITY     /* low fuel level */

PROPERTIES
   TANK_CAPACITY : NAT1 &
   MAX_CONSUMPTION : NAT1 &
   WARNING_CAPACITY : NAT1 &
   MAX_CONSUMPTION < TANK_CAPACITY &
   WARNING_CAPACITY < TANK_CAPACITY
   
END