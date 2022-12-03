`include "H_adder.v"
module H_adder_tb;
    reg a, b;
    wire c, d;
    H_adder h1 (a, b, c, d);//module call
    initial begin
        $dumpfile("H_adder.vcd");
        $dumpvars(0,H_adder_tb);
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