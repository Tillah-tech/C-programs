#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int secretNumber, guess;
    int attempts = 0;   // Counter for number of guesses

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 20
    secretNumber = rand() % 20 + 1;

    printf("Guess a number between 1 and 20:\n");

    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;   // Increase attempt count

        if(guess > secretNumber) {
            printf("Too high!\n");
        }
        else if(guess < secretNumber) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations!\n");
            printf("You guessed the number in %d attempts.\n", attempts);
            break;   // Exit loop when correct
        }
    }

    return 0;
}


