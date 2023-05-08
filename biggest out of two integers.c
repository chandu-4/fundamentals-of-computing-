#include <stdio.h>

int main() {
   int num1, num2;


   printf("Enter two numbers:\n");
   scanf("%d %d", &num1, &num2);


   int biggest = num1;
   if (num2 > num1) {
       biggest = num2;
   }

   printf("The biggest number is: %d\n", biggest);

   return 0;
}

