#include <stdio.h>
int main()
{
    char science,math,pass;

    printf("Did you take science in +2 (y/n): ");
    scanf(" %c",&science);

    if(science=='y')
    {
        Printf("Did you take math in +2 (y/n): ");
        scanf("%c",&math);

        if(math=='y')
        {
            printf("Did you pass +2 exam (y/n): ");
            scanf("%c",&pass);
        }
    }
    return 0;
}
