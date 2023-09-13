#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    int minRange, maxRange;
    int maxAttempts = 5;
    int score = 0;

    srand(time(0));

    printf("Choose a difficulty level:\n");
    printf("1. Easy (1-10)\n");
    printf("2. Medium (1-50)\n");
    printf("3. Hard (1-100)\n");
    int difficulty;
    scanf("%d", &difficulty);

    switch (difficulty) {
        case 1:
            minRange = 1;
            maxRange = 10;
            maxAttempts = 5;
            break;
        case 2:
            minRange = 1;
            maxRange = 50;
            maxAttempts = 7;
            break;
        case 3:
            minRange = 1;
            maxRange = 100;
            maxAttempts = 10;
            break;
        default:
            printf("Invalid choice. Exiting...\n");
            return 1;
    }

    secretNumber = rand() % (maxRange - minRange + 1) + minRange;

    printf("Welcome to the Number Guessing Game!\n");
    printf("You've chosen a number between %d and %d.\n", minRange, maxRange);

    while (attempts < maxAttempts) {
        printf("Attempts left: %d\n", maxAttempts - attempts);
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", secretNumber, attempts);
            score = maxAttempts - attempts + 1;
            break;
        }
    }

    if (attempts == maxAttempts) {
        printf("Sorry, you've run out of attempts. The correct number was: %d\n", secretNumber);
    }

    printf("Your score is: %d\n", score);

    return 0;
}
