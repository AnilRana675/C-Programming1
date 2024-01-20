
#include <stdio.h>
int main()
{
    // Declare variable
    int EmployeeID ;
    float HoursWorked,HourlyRate,Salary;

    // Input Employee details
    printf("Name: Anil Rana\nRoll no: 2\nDescription: Employee Salary");

    printf("\nEnter Employee's ID: ");
    scanf("%d",&EmployeeID);

    printf("Enter total hours worked in month: ");
    scanf("%f",&HoursWorked);

    printf("Enter the amount received per hour: ");
    scanf("%f",&HourlyRate);

    //Calculate salary
    Salary= HoursWorked*HourlyRate;

    printf("\nEmployee ID: %d",EmployeeID);
    printf("\nSalary for the month: Rs%.2f",Salary);

    return 0;
}
