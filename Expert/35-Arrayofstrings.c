#include <stdio.h>
#include <string.h>


int main(void){

    char cars[][10] = {"Mustang", "Corvette", "Camaro"};  // we specified that each array within our car array will have a size of exactly 10 Bytes, so the size of the whole array with three arrays of characters is exactly 30 Bytes :)

    strcpy(cars[0], "Tesla");  // we can use this to edit string values

    for(int i = 0; i < sizeof(cars) / sizeof(cars[i]); i++){

        printf("%s\n", cars[i]);

    }

    return 0;

}