#include <stdio.h>

int main() {

    double num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // IMORTANT: Note the space before %c to consume any leftover newline character

    printf("Enter second number: ");   
    scanf("%lf", &num2);

    printf("Result: ");
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    
    return 0;
}