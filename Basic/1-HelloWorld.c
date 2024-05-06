/* name of file cannot have a space, otherwise it only takes that,
which is after the space, therfore not working.*/

#include <stdio.h>   // initialize main function - preprocessor command that tells the compiler to include the contents of a file, this case "standard input output"
// <stdio.h> -> standard input output header file, includes stdio functions like printf and scanf...


int main(){       // entry point of program, begins with the main function ("main()") followed by curly braces, everything in the curly braces is run proceduraly - from top to bottom.

    printf("I like pizza!\n");    // printf - prints something within the parenthesis
    printf("It's really good!");  // don't forget semicolons
                                  // \n adds a new line character
    return 0;   // a semicolon is used to terminate statements like a period after a sentence.
}               // return 0 - returns the exit status of our program - if the program runs succesfully with no errors - returns a 0, otherwise returns a 1