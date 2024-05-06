#include <stdio.h>


int main(){

    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus) - gives the remainder of any division
    // -- (decrement) -> x-- => x - 1 basically
    // ++ (increment) -> x++ => x + 1 basically

    int x = 5;
    int y = 2;

    // int z = x + y;

    // int z = x - y;

    // int z = x * y;

    // int z = x / y;  // this does not equal 2.5 (a float) because we are storing it in a integer, the decimal portion gets truncated
    // float z = x / y;  // dividing two integers will also truncate the decimal portion
    // so not to truncate the decimal portion we can do 2 things:
    //      1. change the divisor or dividend to a float or double
    //      2. type cast the divisor or dividend (integer) by preceding it in the equation by (float) or (double) -> (float) x
    // float z = x / (float) y;  // this is the second option
    // float z = (float) x / y;  // you can type cast the dividend as well

    // int z = x % y;

    // x++;

    // y--;

    // printf("%d\n", z);
    // printf("%f\n", z);
    printf("%d\n", x);
    printf("%d\n", y);


    return 0;
}