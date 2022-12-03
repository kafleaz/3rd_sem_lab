`include "nand_gate.v"
module nand_gate_tb;
    reg a, b;
    wire c;
    nand_gate nand1 (a, b, c);//module call
    initial begin
        $dumpfile("nand_gate.vcd");
        $dumpvars(0,nand_gate_tb);
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