#include <stdio.h>
#include <string.h>

void sayHi(char *name, int age) // Function definition
{ 
    printf("Hello %s, you are %d years old! \n", name, age);
}

int main()
{
    sayHi("Pedro", 23); // function call

    return 0;
}

