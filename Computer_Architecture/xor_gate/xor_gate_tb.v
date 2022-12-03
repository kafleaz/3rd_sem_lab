`include "xor_gate.v"
module xor_gate_tb;
    reg a, b;
    wire c;
    xor_gate xor1 (a, b, c);//module call
    initial begin
        $dumpfile("xor_gate.vcd");
        $dumpvars(0,xor_gate_tb);
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