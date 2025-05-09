#include <stdio.h>

// Pointers are variables that store the address of another variable.
// When we dereference a pointer, we access the value stored at the address the pointer is pointing to.
// Dereferencing a pointer is done using the * operator.

int main()
{
    int age = 30;
    int * pAge = &age;

    // Dereferencing the pointer to get the value of age (* operator)
    printf("Age adress: %p\n", pAge);
    printf("Age: %d\n", *pAge); // Output: Age: 30

    // Same as above but using the address of operator (&) to get the address of age
    printf("Age address: %p\n", &age);
    printf("Age: %d\n", *&age); // Output: Age: 30
    
    return 0;
}