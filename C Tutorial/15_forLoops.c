#include <stdio.h>

/*  Previously we had:
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
*/ 

int main()
{
    // for loop syntax:
    // for (initialization; condition; increment/decrement) {}
    
    int num[6] = {1, 23, 11, 7, 13, 42};
    int i;

    for (i = 0 ; i < 6; i++) {
        printf("%d\n", num[i]);
    } 

    return 0;
}