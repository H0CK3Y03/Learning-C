#include <stdio.h>
                  // void -> doesn't return anything when invoked/called
void birthday(void){  // returnvalue functionname(parameters){} -> template, void in a parameter means no parameters recquired, same as leaving it empty
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear...YOU!");
    printf("\nHappy birthday to you!\n");
}


int main()  // this is invoking the main function with the return value of int (main function returns 0 if all is good or 1 if something went wrong, it's called an EXIT_STATUS = EXIT_SUCCESS (0) or EXIT_FAIL (1))
{

    birthday(); // we invoke this function (call it) by putting parenthesis after it's name
    birthday();
    birthday();

    return 0;

}