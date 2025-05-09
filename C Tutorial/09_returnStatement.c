#include <stdio.h>

float cube(float num) 
{
    return num * num * num; // Return the cube of the number. Return breaks the function.
}


int main()
{
    printf("The cube of 3 is: %.2f\n", cube(3.0)); // Function call
    
    return 0;
}