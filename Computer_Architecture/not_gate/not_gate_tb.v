`include "not_gate.v"
module not_gate_tb;
reg a;
wire c;
not_gate not1(a,c); //module call
initial begin
    $dumpfile("not_gate.vcd");
    $dumpvars(0,not_gate_tb);
    a=0;
    #3
    a=1;
end
endmodule