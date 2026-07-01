#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (altura + base);
    diagonal = sqrt((altura * altura) + (base * base));

    printf("AREA = %.4lf \n PERIMETRO = %.4lf \n DIAGONAL = %.4lf ", area, perimetro, diagonal);

    return 0;
}
