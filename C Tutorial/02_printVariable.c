#include <stdio.h>

int main() {
    int a = 5;
    float b = 3.14;
    char c = 'A';
    char d[20] = "Hello, World!";
    char e[30] = "This is a string with spaces.";

    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    printf("String: %s\n", d);
    printf("String with spaces: %s\n", e);

    return 0;
}