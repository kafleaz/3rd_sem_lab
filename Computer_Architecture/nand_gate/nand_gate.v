module nand_gate (a, b, c);// module module_name(input, output)
    input a, b;
    output c;
    nand nand1(c, a, b);
endmodule