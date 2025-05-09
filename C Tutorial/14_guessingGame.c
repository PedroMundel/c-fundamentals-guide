#include <stdio.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while (guess != secretNumber && outOfGuesses == 0) {
        if (guessCount < guessLimit){
            printf("Guess the secret number (1-10): ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1; 
            break;
        }
    }

    if (outOfGuesses == 1) {
        printf("Out of guesses! You lose...\n");
    } else
    printf("Congratulations! You guessed the secret number!\n");
    
    return 0;
}