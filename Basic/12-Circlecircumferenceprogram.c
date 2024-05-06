#include <stdio.h>
#include <math.h> // not needed if we don't use the alternative equation for area below using the pow() function


int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;
    
    printf("\nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    // area = PI * pow(radius, 2); // alternative way using the power function
    area = PI * radius * radius;

    printf("Circumference: %lf m", circumference);
    printf("\nArea: %lf m^2", area);

    return 0;
    
}