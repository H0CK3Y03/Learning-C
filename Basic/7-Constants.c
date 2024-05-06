#include <stdio.h>

int main(){

    // constant = fixed value that cannot be altered by the program during it's execution

    const float PI = 3.14159;  // we put "const" at the beginning to make the variable of any datatype a constant

    // PI = 420.69;  // does not work because a constant is basically a read-only variable

    printf("%f", PI);


    return 0;
}