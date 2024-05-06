#include <stdio.h>


void hello(char[], int); //function prototype, declaring a prototype for each function is good practice
// makes code easier to read, you can find main function faster, serves as a list of all functions, basically all around better


int main(){

    // function prototype

    // WHAT IS IT?
    // Function declaration, without a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing (not just a warning, which doesn't stop the code from being run)

    // ADVANTAGES
    // 1. Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. commonly used in header files

    char name[] = "Bro";
    int age = 21;

    hello(name, age);

    return 0;

}

void hello(char name[], int age){  // function after main body, code will execute but will cause unexpected behavior if a function prototype is absent

    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);

}