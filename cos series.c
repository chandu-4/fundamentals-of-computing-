#include <stdio.h>
#include <math.h>

int main() {
    double x, term, cosx;
    int i, sign, fact;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &x);
    x = x * M_PI / 180.0; 

    term = 1;
    cosx = term;
    sign = -1;
    fact = 2;
    i = 1;

    while (fabs(term) > 0.0001) {
        term = sign * term * x * x / fact;
        cosx += term;
        sign = -sign;
        fact *= (2*i+1)*(2*i+2);
        i++;
    }

    printf("The value of cos(%lf) using the series is %lf\n", x, cosx);
    return 0;
}

