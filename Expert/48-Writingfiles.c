#include <stdio.h>


int main(void){

/*
    FILE *pF = fopen("48-test.txt", "a");  // FILEdatatype *pVariablename = fopen("filename.extension", "mode"); mode can be r -> read; w -> write; a -> append
    // relative file path = current folder, only requires filename; absolute file path = requires entire path to some directory
    fprintf(pF, "\nSpongebob Squarepants");  // fprintf(pointer, "text") -> prints to file

    fclose(pF);  // closes file -> good practice
*/

    if(remove("48-test.txt") == 0){  // if the remove function successfully removes the file, it returns a 0 as an exit status so condition will be met

        printf("That file was deleted successfully!\n");

    }

    else{

        printf("That file was NOT deleted!\n");

    }

    return 0;

}