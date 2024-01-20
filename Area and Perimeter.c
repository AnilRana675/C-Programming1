//WAP to find the area and perimeter of the rectangle
#include <stdio.h>

int main() {
    // Declare variables for length and width
    int length, width, area, perimeter;

    // Prompt the user to enter the length and width
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate the area using the formula area = length * width
    area = length * width;

    // Calculate the perimeter using the formula perimeter = 2 * (length + width)
    perimeter = 2 * (length + width);

    // Print the calculated area and perimeter
    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);

    return 0;
}
