#include <stdio.h>

// Pointers are variables that store the address of another variable.
// They are used to manipulate data in memory directly and can be used to create dynamic data structures like linked lists, trees, etc.
// Pointers are also used to pass variables by reference to functions, allowing the function to modify the original variable.

// Pointers are declared using the * operator, and the address of a variable can be obtained using the & operator.

// Pointers are simple, they just get over complicated
// Just think of them as a type of data that we can work with.
// Just like we can work with integers, floats, and characters, we can also work with pointers.
// They are not a new type of data, they are just a different way of working with the same data.

int main()
{
    int age = 30;
    int * pAge = &age; // pointer to age, this is stored in the stack memory

    double gpa = 3.2;
    double * pGpa = &gpa;

    char grade = 'A';
    char * pGrade = &grade;


    return 0;
}