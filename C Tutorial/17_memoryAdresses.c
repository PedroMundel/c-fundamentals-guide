#include <stdio.h>

int main()
{
    int age = 20;       // 4 bytes, this is stored in the stack memory
                        // the stack grows downwards, the heap grows upwards
                        // and the data segment is static memory.
    float gpa = 3.2;    // 4 bytes
    char grade = 'A';   // 1 byte 
    
    // the size of char is 1 byte, the size of int is 4 bytes

    // the size of float is 4 bytes.
    
    // the size of double is 8 bytes.

    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade); 

    
    //we use %p to print the address of the variable
    
    //the address of the variable is printed in hexadecimal format.
    
    //the address of the variable is the location in memory where the variable is stored. 

    
    return 0;
}