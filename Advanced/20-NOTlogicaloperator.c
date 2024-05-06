#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = ! (NOT) -> reverses the state of a condition

    bool sunny = false;

    if(!sunny){  // precede a boolean or variable with the NOT logical operator

        printf("\nIt's cloudy outside!");

    }

    else{

        printf("\nIt's sunny outside!");

    }


    return 0;
}