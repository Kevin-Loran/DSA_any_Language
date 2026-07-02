#include <stdio.h>
#include <string.h>

int main()
{
    int contador, soma, x;
    double media;

    printf("Digite as idades: \n");
    while (x > 0) {
        scanf(" %d", &x);
        if (x > 0){
            soma = soma + x;
            contador = contador + 1;
        }
    }

    if (soma != 0){
        media = (double)(soma / contador);
        printf("\nMedia = %.2lf", media);
    }else {
        printf("\nIMPOSSIVEL DE CALCULAR.\n");
    }

    return 0;
}
