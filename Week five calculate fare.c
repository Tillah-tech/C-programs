#include <stdio.h>

// Function to calculate fare
float calculateFare(float distance) {
    float fare;

    fare = distance * 50;   // KSh 50 per kilometer

    return fare;
}

int main() {

    float distance, totalFare;

    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    totalFare = calculateFare(distance);

    printf("Total Fare: KSh %.2f\n", totalFare);

    return 0;
}
