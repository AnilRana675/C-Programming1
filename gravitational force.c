//Wap to calculate the gravitational force between two masses; Declare the mass as double data type and gravitational Constant (G) as constant
#include <stdio.h>

int main() {
    // Declare the gravitational constant as a constant double
    const double G = 6.6743e-11;  // N * m^2 / kg^2

    // Declare variables for the masses and distance using double data type
    double mass1, mass2, distance;

    // Prompt the user to enter the masses and distance
    printf("Enter the mass of object 1 (in kg): ");
    scanf("%lf", &mass1);

    printf("Enter the mass of object 2 (in kg): ");
    scanf("%lf", &mass2);

    printf("Enter the distance between the objects (in meters): ");
    scanf("%lf", &distance);

    // Calculate the gravitational force using the formula
    double force = G * mass1 * mass2 / (distance * distance);

    // Print the calculated force in a user-friendly format
    printf("The gravitational force between the two objects is: %.2e N\n", force);

    return 0;
}
