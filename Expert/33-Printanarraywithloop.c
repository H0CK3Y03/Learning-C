#include <stdio.h>


int main(void){

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    // printf("%d", sizeof(prices));  // sizeof() operator -> returns the size of something in Bytes


    for(int i = 0; i < sizeof(prices) / sizeof(prices[i]); i++){ // sizeof(prices) returns 48, we divide that by sizeof(prices[i]) which returns the size of the current element in the array prices, this case 8 bytes, so the result is 6 which is how many elements the array has currently

        printf("$%.2lf\n", prices[i]);

    }

    return 0;

}