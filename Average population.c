//Take the population of 3 different districts and find the average population without losing the data. lastly perform the explicit type conversion to find the number of people
#include <stdio.h>

int main() {
    // Get population data for 3 districts (using int for smaller numbers)
    int district1, district2, district3;
    printf("Enter population of district 1: ");
    scanf("%d", &district1);
    printf("Enter population of district 2: ");
    scanf("%d", &district2);
    printf("Enter population of district 3: ");
    scanf("%d", &district3);

    // Calculate average population (using double for accuracy)
    double average = (district1 + district2 + district3) / 3.0;

    // Round average to get total people (as an integer)
    int totalPeople = (int)average;

    // Print the results (may not be accurate for large populations)
    printf("Average population: %.2f\n", average);
    printf("Total people (rounded): %d\n", totalPeople);

    return 0;
}
