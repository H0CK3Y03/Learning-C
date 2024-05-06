#include <stdio.h>


double square(double x){  // instead of void we put what datatype we want to return

    // double result = x * x;
    // return result;  // return valueorvariable

    return x * x;   // shorter, without the need of declaring a local variable

}


int main(){  // int because we return 0 if the program runs successfully or 1 if it runs unsuccesfully

    // return = returns a value back to a calling function

    double x = square(3.14);

    printf("%lf", x);

    return 0;

}