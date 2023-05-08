#include <stdio.h>
#include <math.h>

int main() {
    double x, term, e_x;
    int i, sign, fact;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    term = 1;
    e_x = term;
    sign = -1;
    fact = 1;
    i = 1;

    while (fabs(term) > 0.0001) {
        term = sign * term * x / fact;
        e_x += term;
        sign = -sign;
        fact *= i;
        i++;
    }

    printf("The value of e^(%lf) - 1 using the series is %lf\n", x, e_x - 1);
    return 0;
}

