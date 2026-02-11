#include <stdio.h>

int main() {
    float height;
    double bankBalance;
    char phoneNumber[20];

    // Prompt user for height
    printf("Enter your height (in meters or centimeters): ");
    scanf("%f", &height);

    // Prompt user for bank balance
    printf("Enter your bank balance (in KSh): ");
    scanf("%lf", &bankBalance);

    // Prompt user for phone number
    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);

    
    printf("\n--- User Details ---\n");
    printf("Height: %.2f\n", height);
    printf("Bank Balance: KSh %.2lf\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0; 
}
