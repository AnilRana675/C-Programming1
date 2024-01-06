#include <stdio.h>
int main()
{
    int length, breadth, area;
    printf("Name: Anil Rana\nRollno: 2\nDescription: Area of rectangle");
    printf("\nEnter the value of length: ");
    scanf("%d",&length);
    printf("Enter the value of breadth: ");
    scanf("%d",&breadth);
    area= length*breadth;
    printf("The area of rectangle is: %d", area);
    return 0;
}
