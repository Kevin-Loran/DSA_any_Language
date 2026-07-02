#include <stdio.h>
#include <string.h>

int main()
{
    int x, i;


    printf("quantos numeros voce vai digitar: ");
    scanf(" %d", &x);

    int numeros[x];

    for (i = 0; i < x ; i++) {
        printf("Digite um valor: ");
        scanf(" %d", &numeros[i]);
    }

    for (i = 0; i < x ; i++) {
        if (numeros[i] < 0) {
            printf("\n%d", numeros[i]);
        }
    }

    return 0;
}
