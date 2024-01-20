#include <stdio.h>

int main() {
    double num1, num2, num3;  // Use double for wider range and decimal support

    printf("Enter three numbers (decimals allowed): ");

    // Input validation loop
    while (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter three numbers separated by spaces: ");
        fflush(stdin);  // Clear input buffer for subsequent attempts
    }

    // Function for clarity and reusability
    double find_largest(double a, double b, double c) {
        double largest = a;
        if (b > largest) {
            largest = b;
        }
        if (c > largest) {
            largest = c;
        }
        return largest;
    }

    double largest = find_largest(num1, num2, num3);

    printf("The largest number is: %.2lf\n", largest);  // Format for readability

    return 0;
}
