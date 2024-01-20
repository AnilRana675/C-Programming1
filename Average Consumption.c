#include <stdio.h>

int main() {
    // Declare variables
    int totalDistance;
    float fuelConsumed, averageConsumption;

    printf("Name: Anil Rana\nRoll no: 2\nDescription: Average Consumption");

    // Input total distance and fuel consumed
    printf("\nEnter total distance traveled (in km): ");
    scanf("%d", &totalDistance);

    printf("Enter fuel consumed (in liters, with two decimal points): ");
    scanf("%f", &fuelConsumed);

    // Calculate average consumption
    averageConsumption = totalDistance / fuelConsumed;

    // Print the result
    printf("\nAverage Consumption: %.2f km/l\n", averageConsumption);

    return 0;
}
