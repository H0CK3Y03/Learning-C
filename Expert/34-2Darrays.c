#include <stdio.h>


int main(void){

    // 2D array = an array, where each element is an entire array
    //            useful if you need a matrix, grid, or table of data
/*
    int numbers[2][3] = {
                        {1, 2, 3}, 
                        {4, 5, 6}
                        };  // datatype variablename[unnecessary][necessary maximum of elements within the innermost arrays] = {{element11, element12}, {element21, element22}}
                            // int numbers[row][column] = {
                                                          {row0column0, row0column1},
                                                          {row1column0, row1column1}
                                                          };
*/

    int numbers[3][3];

    // int rows = sizeof(numbers) / sizeof(numbers[0]);  // all elements are the same size so we don't need to worry about the index, unless we over or underreach with it...
    // int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[i]); i++){

        for(int j = 0; j < sizeof(numbers[i]) / sizeof(numbers[i][j]); j++){

            printf("%d ", numbers[i][j]);

        }

        printf("\n");

    }

    return 0;

}