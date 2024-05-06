#include <stdio.h>
#include <string.h>  // this is for not including the newline character while using the fgets function


int main(){

    char name[25];  // max byte size for array is set to 25 -> variable[25], can't change size once program is running
    int age;

    printf("What's your name? ");

    // scanf("%s", &name);  // we need a name without any whitespaces because the scanf function reads anything up to any whitespaces
    // scanf can't read whitespaces

    // if array size is [3] -> is user input is atleast 2 lower than array size, the array gets filled with -> [x][\n][\0], otherwise it gets this -> [x][y][\0], so \n only appears if there is still space after inserting the users string + \0
    // \n counts towards string length but \0 doesn't, yet both take up 1 space 
    fgets(name, 25, stdin);  // so we need to use the fgets function
    // fgets(variable, input size, standard input)
    // includes the newline character if you hit enter
    // so we need to do this: 
    name[strlen(name) - 1] = '\0'; // gets the length of the data in the variable
                                   // \0 -> null terminator -> truncates (removes) everything after it, so \n is now replaced with \0

    printf("How old are you? ");

    scanf("%d", &age);    // scanf() -> function that accepts user input
                          // we put a format specifier comma and the variable
                          // preceded by a ampersand -> &, because that is the "adress of operator", in other words, the reference operator

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old!", age);


    return 0;
}