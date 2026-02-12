#include <stdio.h>

int main() {
    int units;
    float bills;

    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        bills = units * 20;
    }
    else if (units <= 60) {
        bills = units * 25;
    }
    else {
        bills = units * 30;
    }

    printf("Total water bill: %.2f KES\n", bills);

    return 0;
}
