#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, raiz, delta;

    printf("Coeficiente a: ");
    scanf(" %lf", &a);
    printf("Coeficiente b: ");
    scanf(" %lf", &b);
    printf("Coeficiente c: ");
    scanf(" %lf", &c);

    delta = (b * b) - 4 * a * c;

    if (delta < 0) {
        printf("Esta equacao não possui raizes reais.");
    }
    else {
       x1 = (-b + sqrt(delta)) / (2 * a);
       x2 = (-b - sqrt(delta)) / (2 * a);

       printf("\nx1 = %.4lf \n x2 = %.4lf", x1, x2);
    }

    return 0;
}
