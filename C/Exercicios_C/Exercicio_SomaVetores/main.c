#include <stdio.h>
#include <string.h>

int main()
{
    int x, i;
    double media, soma;

    printf("Quantos numeros voce ira digitar: ");
    scanf(" %d", &x);

    double numeros[x];

    for (i = 0; i <  x; i++) {
        printf("digite o valor %d: ", i);
        scanf(" %.2lf", &numeros[i]);
    }

    printf("\nvalores = ");
    for (i = 0; i <  x; i++) {
        soma = soma + numeros[i];
        printf(" %.2lf", numeros[i]);
    }

    media = soma / i;

    printf("\nsoma = %.2lf", soma);
    printf("\nmedia = %.2lf", media);


    return 0;
}
