#include <stdio.h>
#include <math.h>  // math header file containing useful math functions


int main(){

    double A = sqrt(9);  // square root function
    double B = pow(2, 4);  // raises a base to a power -> pow(base, power)
    int C = round(3.14);  // round number function
    int D = ceil(3.14);  // ceiling function, always rounds a number up
    int E = floor(3.999);  // floor function, always rounds a number down
    double F = fabs(-100);  // absolute function, makes negative numbers positive
    double G = log(3);  // logarithm function
    double H = sin(45);  // sine function
    double I = cos(45);  // cosine function
    double J = tan(45);  // tangent function

    printf("\n%lf", J);
    // printf("\n%d", E);


    return 0;
}