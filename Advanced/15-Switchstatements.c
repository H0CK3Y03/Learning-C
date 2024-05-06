#include <stdio.h>

int main(){

    // switch = A more effecient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);
/*
    if(grade == 'A'){
        printf("perfect!\n");
    }
    else if(grade == 'B'){
        printf("You did good!\n");
    }
    else if(grade == 'C'){
        printf("You did okay\n");
    }
    else if(grade == 'D'){
        printf("At least it's not an F\n");
    }
    else if(grade == 'F'){
        printf("YOU FAILED\n");
    }
    else{
        printf("That's not a valid grade");
    }
*/

    switch(grade){   // within parenthesis place value that you want to examine
        case 'A':  // we add cases, in the case that grade == 'A' we execute the code directly below
            printf("perfect!\n");
            break;  // we add breaks at the end of our case to successfully exit the switch and exit
            // if there are no breaks, the code will execute at the matched case and then it will continue to execute all remaining cases after the matched case
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default: // acts like an else statement, if no other case is matched, this code block will run
            printf("Please enter only valid grades");
    }

    return 0;

}