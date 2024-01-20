//WAP to find whether the number is odd or even using a ternary operator.

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");

    return 0;
}
