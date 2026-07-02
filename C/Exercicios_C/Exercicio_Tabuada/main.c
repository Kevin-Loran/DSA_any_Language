#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i, resultado;

    printf("Digite o numero da tabuada: ");
    scanf(" %d", &numero);

    for (i = 1; i < 11; i++) {
       resultado = numero * i;
       printf("\n%d x %d = %d", numero, i, resultado);
    }

    return 0;
}
