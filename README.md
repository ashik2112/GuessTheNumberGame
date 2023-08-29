#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;

    printf("Welcome to the Guess the Number Game!\n");

    do
    {
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secretNumber)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > secretNumber)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    }
    while (guess != secretNumber);

    return 0;
}
