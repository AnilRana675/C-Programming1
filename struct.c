#include<stdio.h>
struct student
{
    char name[30];
    int roll;
    float marks;
};
void main()
{
    struct student s[5];
    int i;
    printf("Enter student record");
    for(i=0;i<5;i++)
    {

        printf("\nName:\t");
        scanf("%s", s[i].name);
        printf("\nRoll:\t");
        scanf("%d", s[i].roll);
        printf("\nMarks:\t");
        scanf("%f", s[i].marks);

    }

    for(i=0;i<5;i++)
    {
        printf("%s %d %f",s[i].name, s[i].roll, s[i].marks);
    }
    getch();
}

