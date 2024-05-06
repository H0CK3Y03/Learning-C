#include <stdio.h>
#include <stdbool.h> // allows us to declare and use booleans (True and False)

int main(){

    // logical operators = && (AND) -> checks if two conditions are true

    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny == true){

        printf("\nThe weather is good!");

    }

    else{

        printf("\nThe weather is bad!");

    }

    return 0;

}