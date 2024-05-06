#include <stdio.h>
#include <stdbool.h>  // we need to include this if we want to work with booleans

int main(){

    char a = 'C';       // single character -> placeholder/format specifier is %c
    char b[] = "Bro";   // array of characters -> %s

    float c = 3.141592;  // 4 bytes (32 bits of precision) 6 - 7 digits -> %f | store a decimal number
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits -> %lf | doubles have double the precision of floats

    bool e = true;  // 1 byte (true or false) -> %d | technically needs only 1 bit (0 o 1) but still uses up 1 byte

    char f = 100;  // 1 byte (-128 to +127) -> %d or %c | we can store whole integers from -128 to +127 using the ASCII table if we put %c, %d just prints the 100 | these are signed but we don't need to type that unlike unsigned
    unsigned char g = 255;  // 1 byte (0 to +255) -> %d or %c | basically ignores negative integers so 127 + 128 = 255 and 0 are the limits, if you go beyond, then it resets back to the beginning (0) and counts up -> 255 = 255, 256 = 0, 257 = 1, 258 = 2, or down if we go the opposite way 0 = 0, -1 = 255, -2 = 254 etc.

    short int h = 32767;  // 2 bytes (-32,768 to +32,767) -> %d | stores a whole integer from -32 768 to 32 767, if it overflows (bigger number than max limit) it resets to the minimum value, this case -32,768 or vice versa -32,769 = 32,767
    unsigned short int i = 65535;  // 2 bytes (0 to +65,535) -> %d | again ignores negative integers
    // we can also use only short, without int after it

    int j = 2147483647;  // 4 bytes (-2,147,483,648 to + 2,147,483,647) -> %d | stores whole numbers | these can also be written as long int, but we don't write long usually
    unsigned int k = 4294967295UL;  // 4 bytes (0 to +4,294,967,295) -> %u | again ignores negative numbers

    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to + 9 quintillion) -> %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) -> %llu | presents a warning, but still displays correctly and exits code with code=0 (no errors). If we don't want the warning then we just type U at the end of the number -> 6230U
    // we write long 2x -> long long int; because long int is just int (standard)


    // printf("%c\n", a); // char
    // printf("%s\n", b); // character array
    // printf("%f\n", c); // float
    // printf("%0.15f\n", c);  // float, we can show more than 6 - 7 digits (we just put %0.'numberofdigitswithoutquotes''datatypewithoutquotes') but the precision will be bad, the numbers after the float limit (6 - 7) will not be the same
    // printf("%lf\n", d);  // double, rounds the number if there are undisplayed digits
    // printf("%0.15lf\n", d);  // double, we show more digits by putting %0.'numberofdigitswithoutquotes''datatypewithoutquotes'
    // printf("%d\n", e); // bool, 0 is false and 1 is true
    // printf("%d\n", f);  // char as numeric value
    // printf("%c\n", f);  // char as character representation of numeric value using ASCII
    // printf("%d\n", g);  // char as unsigned numeric value 
    // printf("%c\n", g);  // char as character representation of unsigned numeric value using ASCII
    // printf("%d\n", h);  // short (integer) / we can declare shorts by typing short, we don't need to type short int
    // printf("%d\n", i);  // unsigned short
    // printf("%d\n", j);  // int
    // printf("%u\n", k);  // unsigned int
    // printf("%lld\n", l);  // long long int
    // printf("%llu\n", m);  // unsigned long long int
    


    return 0;
}