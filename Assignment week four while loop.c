#include <stdio.h>

int main() {

    double balance = 700000.0;   // Initial balance
    double withdraw;

    printf("Initial Balance: %.2f\n", balance);

    while(balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%lf", &withdraw);

        balance -= withdraw;

        printf("Remaining Balance: %.2f\n", balance);

        if(balance <= 0) {
            printf("Account balance is zero or negative. No more withdrawals allowed.\n");
        }
    }

    return 0;
}
