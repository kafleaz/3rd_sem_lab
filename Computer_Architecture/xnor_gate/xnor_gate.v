module xnor_gate (a, b, c);// module module_name(input, output)
    input a, b;
    output c;
    xnor xnor1(c, a, b);
endmodule