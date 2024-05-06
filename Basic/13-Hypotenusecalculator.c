// hypotenuse -> the longest side of a right angle triangle or c in pythagoras's theorem
#include <stdio.h>
#include <math.h>


int main(){

    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    // C = sqrt(pow(A, 2) + pow(B, 2)); // alternative equation
    C = sqrt(A * A + B * B);

    printf("Side C: %7.2lf", C);


    return 0;
}