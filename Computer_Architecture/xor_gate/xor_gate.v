module xor_gate (a, b, c);// module module_name(input, output)
    input a, b;
    output c;
    xor xor1(c, a, b);
endmodule