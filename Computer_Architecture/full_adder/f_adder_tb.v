`include "f_adder.v"
module f_adder_tb;
    reg a, b, cin;
    wire cry, sum;
    //f_adder f1 (a, b, cin, sum, cry);//module call
    initial begin
        $dumpfile("f_adder.vcd");
        $dumpvars(0,f_adder_tb);
        a = 0;
        b = 0;
        cin= 0;
        #1
        a = 0;
        b = 0;
        cin= 1;
        #1
        a = 0;
        b = 1;
        cin=0;
        #1
        a = 0;
        b = 1;
        cin=1;
        #1
        a= 1;
        b=0;
        cin=0;
        #1
        a = 1;
        b = 0;
        cin=1;
        #1
        a = 1;
        b = 1;
        cin=0;
        #1
        a= 1;
        b= 1;
        cin=1;
    end
endmodule