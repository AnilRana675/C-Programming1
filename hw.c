#include <stdio.h>

int main() {
   int num;

   printf("Enter an integer: ");
   scanf("%d", &num);

   if (num % 2 == 0 && num % 5 == 0) {
       num++;  // Increment if divisible by both 2 and 5
   } else if (num % 2 == 0 || num % 5 == 0) {
       num--;  // Decrement if divisible by only one of 2 or 5
   }

   printf("The modified number is: %d\n", num);

   return 0;
}
