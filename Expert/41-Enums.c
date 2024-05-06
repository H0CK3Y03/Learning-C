#include <stdio.h>


enum Day{Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7}; // enums are constants
// enum enumname{constant1, constant2, ..., constantN};
// each constant has a integer value associated with it -> const1 -> 0, const2 -> 1, ..., constN -> N - 1 by default, we can assign custom integers to our constants -> const1 = 1, const2 = 2, ..., constN = N

int main(){

    // enum -> enumeration = a user defined type of named integer identifiers
    //                       helps to make a program more readable

    enum Day today = Sat;

    // printf("%d\n", today); // enums are NOT STRINGS, but they can be treated as integers

    if(today == Sat || today == Sun){

        printf("It's the weekend! Party time!\n");

    }

    else if(today > 0 && today < Sat){

        printf("I have to work today :(\n");

    }

    else{

        printf("Something wrong!\n");

    }


    return 0;

}