module f_adder (a, b, cry, sum, cin);// module module_name(input, output)
    input a, b, cin;
    output cry, sum;
    wire s1,c1,c2;
    
    xor xor1(s1, a, b);
    and and1(c1, a, b);
    xor xor2(sum,s1,cin);
    and a2(c2,s1,cin);
    or or1(carry,c1,c2);
endmodule