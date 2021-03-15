var t1_to_gp_00, integer;
s.t. c0 : 1*t1_to_gp_00 + -2>= 0;
minimize obj: 1*t1_to_gp_00;
solve;printf "t1_to_gp_00 = %d\n", t1_to_gp_00;
end;
