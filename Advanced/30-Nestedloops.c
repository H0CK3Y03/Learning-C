#include <stdio.h>


int main(void){

    // nested loop = a loop inside of another loop

    char symbol;
    int rows;
    int columns;

    printf("Enter symbol: ");
    scanf("%c", &symbol);

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for(int i = 1; i <= rows; i++){

        for(int j = 1; j <= columns; j++){

            printf("%c", symbol);

        }

        printf("\n");
        
    }

    return 0;

}