MACHINE
    assert1
ASSERTIONS
    SIGMA(xx).(xx : {0,1} | xx) = 1;
    SIGMA(xx).(xx : {0,2} | xx) = 2;
    SIGMA(xx).(xx : {0} & xx : {1} | xx) = 0;
    #(xx).(xx : 0..1 & xx <= 0);
    #(xx,yy,zz).(xx : {2,3,7} & yy : {5,11,13} & zz : {6,10,55} & SIGMA(tt).(tt : 1..xx | yy) = zz)
END
