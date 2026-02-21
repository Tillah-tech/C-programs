#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int secretNumber, guess;

    // Seed random number generator
    srand(time(0));

    // Generate number between 1 and 20
    secretNumber = rand() % 20 + 1;

    printf("Guess a number between 1 and 20:\n");

    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > secretNumber) {
            printf("Too high!\n");
        }
        else if(guess < secretNumber) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations!\n");
            break;   // Exit loop when correct
        }
    }

    return 0;
}
