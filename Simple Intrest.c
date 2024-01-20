#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Get user input with clear prompts and validation
    printf("Enter principal amount (positive value): ");
    while (scanf("%f", &principal) != 1 || principal <= 0) {
        printf("Invalid input. Please enter a positive principal amount: ");
        scanf("%*[^\n]");  // Clear input buffer
    }

    printf("Enter rate of interest (positive percentage): ");
    while (scanf("%f", &rate) != 1 || rate <= 0) {
        printf("Invalid input. Please enter a positive interest rate: ");
        scanf("%*[^\n]");
    }
    rate /= 100;  // Convert percentage to decimal

    printf("Enter time period (in years): ");
    while (scanf("%f", &time) != 1 || time <= 0) {
        printf("Invalid input. Please enter a positive time period: ");
        scanf("%*[^\n]");
    }

    // Calculate simple interest using the formula
    simpleInterest = (principal * rate * time);

    // Display the result with clear formatting and a descriptive message
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Total Amount (Principal + Interest) = %.2f\n", principal + simpleInterest);

    return 0;
}
