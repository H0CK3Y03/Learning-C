#include <stdio.h>
#include <string.h>


int main(void){

    char string1[] = "Bro";
    char string2[] = "Code";

    strlwr(string1);  // converts a string to lowercase
    // strupr(string1);  // converts a string to uppercase
    // strcat(string1, string2);  // appends string2 to the end of string1
    // strncat(string1, string2, 1); // appends n characters from string2 to string1
    // strcpy(string1, string2);  // copy string2 to string1
    // strncpy(string1, string2, 2); // copy n characters from string2 to string1

    // strset(string1, '?');  // sets all characters of a string to a given character
    // strnset(string1, 'x', 1);  // sets first n characters of a string to a given character
    // strrev(string1);  // reverses a string

    // int result = strlen(string1);  // returns string length as int
    // int result = strcmp(string1, string2);  // string compare all characters, if they are all the same, the result is 0, if they aren't the same the result is something else than 0
    // int result = strncmp(string1, string2, 1);  // string compare n characters, 1 -> compare first character of one string to the first character of the other, returns the result above
    // int result = strcmpi(string1, string2); // string compare all characters (ignore case sensitivity), otherwise does the same as the two above
    int result = strnicmp(string1, string2, 1);  // string compare n characters (ignore case sensitivity), otherwise does the same as the two above
/*
    if(result == 0){

        printf("These strings are the same\n");

    }

    else{

        printf("These strings are not the same\n");

    }
*/
    printf("%s", string1);
    printf("%d", result);

    return 0;

}