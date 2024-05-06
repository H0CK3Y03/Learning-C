#include <stdio.h>


void birthday(char x[], int y){  // parameters, we need to declare the datatypes of the parameters

    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!", y);

}



int main(void){

    char name[] = "Bro";
    int age = 21;

    birthday(name, age);  // arguments

    return 0;

}