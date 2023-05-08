#include <stdio.h>

int main() {
   int n, i, num, biggest;

   printf("Enter the number of integers to compare:\n");
   scanf("%d", &n);


   printf("Enter an integer:\n");
   scanf("%d", &biggest);


   for (i = 1; i < n; i++) {
       printf("Enter an integer:\n");
       scanf("%d", &num);
       if (num > biggest) {
           biggest = num;
       }
   }


   printf("The biggest number is: %d\n", biggest);

   return 0;
}

