#include <stdio.h>


void printAge(int *pAge){

    printf("You are %d years old!\n", *pAge);

}

int main(void){

    // pointer = a "variable-like" reference that holds a memory address as a value, to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address) // dereference operator

    int age = 21;
    int *pAge = NULL; // datatype *pVariablename = &variablename  -> common naming convention
    // good practice if declaring but not assigning a concrete value to a pointer -> assign the pointer a value of NULL
    pAge = &age;
    // datatype for pointer must be the same as the variable it's pointing to

    // printf("address of age: %p\n", &age);

    // printf("value of pAge: %p\n", pAge);

    // printf("value of age: %d\n", age);

    // printf("value at stored address: %d\n", *pAge);  // a dereferenced pointer -> basically is the value at the address the pointer has stored -> *pVariablename

    // printf("size of age: %d bytes\n", sizeof(age));
    // printf("size of pAge: %d bytes\n", sizeof(pAge));

    printAge(pAge);


    return 0;

}