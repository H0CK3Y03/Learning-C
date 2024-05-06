#include <stdio.h>


int main(void){

    // array = data structure that can store many values of the same data type.
    // they have a fixed size, we can't change the size after we compile and run our program

    // double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};  // variablename[] = {element1, element2, element3,..., elementn}
    // double prices[5];

/*
    prices[0] = 5;
    prices[1] = 10;
    prices[2] = 15;
    prices[3] = 25;
    prices[4] = 20;
*/

    double prices[10] = {5.0, 10.0, 15.0, 25.0, 20.0};

    printf("%.1lf", prices[4]);

    return 0;

}