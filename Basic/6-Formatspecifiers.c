#include <stdio.h>

int main(){

    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision (number of decimals)
    // %1 = minimum field width | basically creates space for %x characters and then right aligns the stored value if there is space
    // %- = left align | %-x basically the same but left aligns the stored value, meaning anything after will be placed however many space characters remain

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f\n", item1);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%8.2f\n", item3);


    return 0;
}