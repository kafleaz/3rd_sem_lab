`include "or_gate.v"
module or_gate_tb;
reg a,b;
wire c;
or_gate or1(a,b,c); //module call
initial begin
    $dumpfile("or_gate.vcd");
    $dumpvars(0,or_gate_tb);
    a=0; b=0;
    #1
    a=0; b=1;
    #1
    a=1; b=0;
    #1
    a=1; b=1;
end
endmodule