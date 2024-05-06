#include <stdio.h>
#include <string.h>


int main(void){

    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("\nx: %s\ny: %s", x, y);

    return 0;

}