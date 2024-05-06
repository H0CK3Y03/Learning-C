#include <stdio.h>

int main(){

    // variable =   Allocated space in memory to store a value.
    //              We refer to a variable's name to access the stored value.
    //              That variable now behaves as if it was the value it contains.
    //              BUT we need to declare what type of data we are storing.
    // Creating a variable -> declaration (creating space to store a value) + intialization (storing a value)

    int x;   // declaration -> datatype variable -> this case integer x (int x;)
    x = 123; // intialization -> variable = datatypevalue; this case -> x = 123;
    int y = 321;  // declaration + initialization; all on one line

    int age = 21; // integer -> a whole number
    float gpa = 2.05;  // floating point number -> number that contains a decimal portion
    char grade = 'C';  // single character -> (has to be in single quotes) {pronounced char as charizard or charred meat}
    char name[] = "Bro"; // array of characters -> char variable[] = "" -> has to be in double quotes, a string does not exist here because a string is technically an object -> this is not a object oriented programming language, technically a combination of single characters
                            // % -> format specifier, after comes the datatype we want to use, f.e. %d for an integer
    printf("Hello %s\n", name); // %s -> string placeholder, then same thing applies as below
    printf("You are %d years old\n", age); // %d -> decimal placeholder, after the double quotes we format the printf statement by placing a comma and then placing the name of the variable we want to place in place of the placeholder format specifier (%x)
    printf("Your average grade is %c\n", grade); // %c -> character placeholder
    printf("Your GPA is %f\n", gpa); // %f -> floating point number placeholder


    return 0;

}