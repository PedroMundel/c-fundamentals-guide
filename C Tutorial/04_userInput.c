#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");

    scanf("%d", &age); 

    /* &: for pointers*/
    /* you have to specify the type of variable that is being inputed*/
    /* %d: for integers, %f: for floats, %c: for characters, %s: for strings... */
    /*fgets(char*, int, stdin) for line of text, int for the max number of char you want */
    
    return 0;
}