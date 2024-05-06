#include <stdio.h>


int main(void){

    FILE *pF = fopen("C:\\Users\\Adam Vesely\\Desktop\\School.txt", "r");
    char buffer[255];  // a buffer is going to act as a container -> here, as an array of characters to hold one line of our text document, one line at a time

    if(pF == NULL){

        printf("Unable to open file!\n");

    }

    else{

        while(fgets(buffer, 255, pF) != NULL){ // reads the file, until it retuns NULL

            printf("%s", buffer);
        }

    }

    fclose(pF);

    return 0;

}