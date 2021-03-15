var blurx_to_gp_00, integer;
var input_to_gp_18, integer;
s.t. c0 : 1*blurx_to_gp_00 + 0*input_to_gp_18 + -2>= 0;
s.t. c1 : 0*blurx_to_gp_00 + 1*input_to_gp_18 + -2>= 0;
s.t. c2 : 1*blurx_to_gp_00 + 1*input_to_gp_18 + 0>= 0;
minimize obj: 1*blurx_to_gp_00 + 1*input_to_gp_18;
solve;printf "blurx_to_gp_00 = %d\n", blurx_to_gp_00;
printf "input_to_gp_18 = %d\n", input_to_gp_18;
end;
