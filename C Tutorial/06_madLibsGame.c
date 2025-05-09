#include <stdio.h>
#include <string.h>

int main() 
{    
    char color[20];
    char pluralNoun[20];
    char celebrity[20];
    char verb[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");

    getchar(); // To consume the newline character left by the previous scanf
    fgets( celebrity, 30, stdin);
    celebrity[strcspn(celebrity, "\n")] = '\0'; // Remove the newline character from the string
    printf("Enter a verb: ");

    scanf(" %s", verb);


    printf("Roses are %s \n", color);
    printf("%s are blue, \n", pluralNoun);
    printf("I love %s, \n", celebrity);
    printf("And so %s you! \n", verb);

    return 0;
}