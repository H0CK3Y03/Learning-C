#include <stdio.h>


int main(void){

    // BITWISE OPERATORS = special operators used in bit level programming
    //                     (knowing binary is important for this topic)
    
    // & = AND
    // | = OR
    // ^ = XOR -> exclusive or -> 1  1  -> 0
    // <<  left shift
    // >>  right shift

    int x = 6;  // (bin) = 00000110
    int y = 12; // (bin) = 00001100
    int z = 0; // (bin) = 00000000

    z = x & y; // compares numbers bit by bit -> 0 , 0 -> 0; 1, 0 -> 0; 0, 1 -> 0; 1, 1 -> 1;
    printf("AND = %d\n", z); // 4 -> 00000100

    z = x | y;
    printf("OR = %d\n", z); // 14 -> 00001110

    z = x ^ y;
    printf("XOR = %d\n", z); // 10 -> 00001010

    z = x << 1; // 12 -> 00001100  -> just moves every bit n times to the left and adds a 0 to the right, x << n
    printf("SHIFT LEFT = %d\n", z);  // number doubles with each left shift

    z = x >> 2; // 00000011 -> 3  -> same as << but to the right
    printf("SHIFT RIGHT = %d\n", z);  // number halves with each right shift
    // if we move to much to the right, then bits get cutoff/truncated meaning if we have 0011 and we shift right we will get 0001, going from 3 to 1 -> from 3 to 1.5 but 0.5 gets truncated

    return 0;

}