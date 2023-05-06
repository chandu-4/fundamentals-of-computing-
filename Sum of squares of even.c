#include <stdio.h>

int main() {
    int n, i;
    long int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        sum += i * i;
    }

    printf("The sum of the series is: %ld", sum);

    return 0;
}

