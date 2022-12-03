`include "xnor_gate.v"
module xnor_gate_tb;
    reg a, b;
    wire c;
    xnor_gate xnor1 (a, b, c);//module call
    initial begin
        $dumpfile("xnor_gate.vcd");
        $dumpvars(0,xnor_gate_tb);
        a = 0;
        b = 0;
        #1
        a = 0;
        b = 1;
        #1
        a = 1;
        b = 0;
        #1
        a = 1;
        b = 1;
    end
endmodule