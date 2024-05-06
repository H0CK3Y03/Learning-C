#include <stdio.h>
#include <string.h>


int main(void){

    // while loop = repeats a section of code possibly inlimited times.
    // WHILE some condition remains true
    // a while loop might not execute at all 

    char name[25];

    printf("What's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){

        printf("You did not enter your name\n");
        printf("What's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';

    }

    printf("Hello %s", name);

    return 0;

}