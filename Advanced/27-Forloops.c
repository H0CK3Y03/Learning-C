#include <stdio.h>


int main(void)
{
    // for loop = repeats a section of code a limited amount of times
    // I will use | for better readability in the comment directly below this one
    for(int index = 10; index > 0; index-=4) // for(declaration+initialization of nameofindex | ; condition - how long should we continue repeating this code | ; we can increment/decrement our index/counter by any amount we want)
    {

        printf("%d\n", index);

    }

    return 0;

}