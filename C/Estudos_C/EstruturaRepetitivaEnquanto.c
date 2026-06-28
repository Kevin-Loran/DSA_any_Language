#include <stdio.h>
#include <string.h>

int main() {
    int x, soma;

    x = 1;
    while (x != 0) {
        printf("Digite um numero: ");
        scanf(" %d", &x);
        soma = soma + x;
    }

    printf("Soma = %d ", soma);

    return 0;
}
