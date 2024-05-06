#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    // pseudo random numbers = A set of values or elements that are statistically random
    //                         (Don't use these for any sort of cryptographic security)

    srand(time(0)); // srand -> seedrandom, if we don't have this, that means we are generating random numbers on the same seed, which means it will always generate the same numbers for that seed

    int number1 = (rand() % 20) + 1; // rand() % 6 -> number between 0 and 5, because the remainder after the division of a number by 6 can only be lower than 6 :), so if we put % 6 + 1, then we get 0 - 5, and add 1 so now our range is 1 - 6. :)))
    int number2 = (rand() % 20) + 1;
    int number3 = (rand() % 20) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;

}