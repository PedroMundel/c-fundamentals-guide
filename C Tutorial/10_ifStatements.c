#include <stdio.h>

int max2(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int max3(int num1, int num2, int num3)
{
    if (num1 >= num2 && num1 >= num3)
    {
        return num1; 
    } else if (num2 >= num1 && num2 >= num3) {
        return num2; 
    } else {
        return num3; 
    }

}

// Function prototype before the function definition
// this is because the function is returning a value and being defined after main, so we need a prototype
// this is to let the compiler know that the function exists before it is called in main.
// The function prototype is a declaration of the function that specifies the function name, return type, and parameters.

int max2noIf(int num1, int num2){} 
int max3noIf(int num1, int num2, int num3){}


int main()
{
    printf("The maximum number is: %d\n", max2(3, 5)); 
    printf("The maximum number is: %d\n", max3(3, 5, 7));
    
    printf("The maximum number is: %d\n", max2noIf(3, 5)); 
    printf("The maximum number is: %d\n", max3noIf(3, 5, 7));


    // Logical operators
    // a == b  -> EQUAL operator
    // a && b  -> AND operator
    // a || b   -> OR operator
    // a ! b   -> NOT operator
    // a != b   -> NOT EQUAL operator
    // a > b   -> GREATER THAN operator
    // a < b   -> LESS THAN operator
    // a >= b   -> GREATER THAN OR EQUAL operator
    // a <= b   -> LESS THAN OR EQUAL operator

    if(3>2 || 2>5) // || -> OR operator
    {
        printf("True\n"); 
    } else {
        printf("False\n"); 
    }

    if(3 != 2) // != -> NOT EQUAL operator
    {
        printf("True\n"); 
    } else {
        printf("False\n"); 
    }

    if(!(3 > 2)) // ! -> NOT operator
    {
        printf("True\n"); 
    } else {
        printf("False\n"); 
    }

    return 0;
}

// Bonus: Ternary operator
// Gets rid of the if statement for efficiency and cleaner codes.
// The ternary operator is a shorthand for the if statement. 
// It is used to evaluate a condition and return one of two values based on the result of the condition.

int max2noIf(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2; // (condition) -> ? -> value if true : value if false
}

int max3noIf(int num1, int num2, int num3)
{
    return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
}
