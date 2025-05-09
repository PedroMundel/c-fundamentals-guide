#include <stdio.h>

int main()
{
    int index = 1;

    printf("while loop: \n\n");

    while(index <=5) // while loop
    {
        printf("Index is: %d\n", index);
        index++; // increment index by 1 (equals to index = index + 1). Try to execute without this line and see what happens.
    }

printf("\n\ndo while: \n\n");

    do{
        printf("Index is: %d\n", index);
        index++; 
    }while (index <= 5); // do while loop, executes at least once even if the condition is false

    return 0;
}