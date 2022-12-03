module H_adder (a, b, c, d);// module module_name(input, output)
    input a, b;
    output c, d;

    xor xor1(d, a, b);
    and and1(c, a, b);
endmodule