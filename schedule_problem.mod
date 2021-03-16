var input_to_gp_00, integer;
s.t. c0 : 1*input_to_gp_00 + -2>= 0;
minimize obj: 1*input_to_gp_00;
solve;printf "input_to_gp_00 = %d\n", input_to_gp_00;
end;
