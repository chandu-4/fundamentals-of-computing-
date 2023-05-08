#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sinx;
    int i, sign, fact;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &x);
    x = x * M_PI / 180.0; // convert to radians

    term = x;
    sinx = term;
    sign = -1;
    fact = 1;
    i = 1;

    while (fabs(term) > 0.0001) {
        term = sign * term * x * x / fact;
        sinx += term;
        sign = -sign;
        fact *= (2*i)*(2*i+1);
        i++;
    }

    printf("The value of sin(%lf) using the series is %lf\n", x, sinx);
    return 0;
}

