#include <stdio.h>
#include <ctype.h> 

int main()
{
    char grade;
    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    grade = toupper((unsigned char)grade);  // Converts to uppercase

    switch(grade){
        case 'A':
            printf("Excellent!\n");
            break; // Break statement to exit the switch block
        case 'B':
            printf("Good Job!\n");
            break;
        case 'C':
            printf("Fair enough!\n");
            break;
        case 'D':
            printf("Poor!\n");
            break;
        case 'F':
            printf("Failed lol!\n");
            break;
        default:
            printf("Invalid grade!\n"); // Default case if no match is found 
    }

    return 0;
}
