#include <stdio.h>
#include <ctype.h>


int main(void){

    char questions[][100] = {"1. What year did the C language debut?: ",
                             "2. Who is credited with creating C?: ",
                             "3. What is the predecessor of C?: "};

    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                            "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                            "A. Objective C", "B. B", "C. C++", "D. C#"};

    char answers[3] = {'B', 'A', 'B'};

    int numberofQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess = ' ';
    int score = 0;

    printf("QUIZ GAME\n");

    for(int i = 0; i < numberofQuestions; i++){

        printf("************************\n");
        printf("%s\n", questions[i]);
        printf("************************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++){

            printf("%s\n", options[j]);

        }
        
        printf("guess: ");
        scanf("%c", &guess); // when we except a character, we have a newline character in the input buffer (basically we type A and hit enter -> A gets excepted, \n does not, but it does not simply disappear, so it is a buffer -> next time scanf gets called, the program takes \n from previous scanf as input without the user doing anything)
        scanf("%*c"); // this takes the buffered newline character and deletes basically
        // clears \n from input buffer, * -> means character should be read and ignored

        guess = toupper(guess);

        if(guess == answers[i]){

            printf("CORRECT!\n");
            score++;

        }

        else{

            printf("WRONG!\n");

        }
    }

    printf("************************\n");
    printf("FINAL SCORE: %d / %d\n", score, numberofQuestions);
    printf("************************\n");

    return 0;

}