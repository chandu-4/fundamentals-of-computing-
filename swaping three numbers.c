#include <stdio.h>

int main() {
   int a, b, c;

   printf("Enter three numbers:\n");
   scanf("%d %d %d", &a, &b, &c);

   int temp = a;
   a = b;
   b = c;
   c = temp;
   printf("Swapped numbers: a = %d, b = %d, c = %d\n", a, b, c);

   return 0;
}

