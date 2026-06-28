#include <stdio.h>
#include <string.h>

int main() {
    int x, i, soma, n;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &n);

    for (i = 0; i  <= n; i++ ) {
        printf("Digite um numero: ");
        scanf("%d", &x);

        soma = soma + x;
    }

    printf("\nSoma = %d", soma);

    return 0;
}
