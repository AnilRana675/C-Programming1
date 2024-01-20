#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    // Convert height to meters
    height /= 100;

    // Calculate BMI
    bmi = weight / (height * height);

    // Print the BMI and interpretation
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi < 25) {
        printf("You are normal weight.\n");
    } else if (bmi < 30) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }

    return 0;
}
