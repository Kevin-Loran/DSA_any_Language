#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, i, soma;

    printf("Digite dois numeros:\n");
    scanf(" %d", &x);
    scanf(" %d", &y);

    if (x < y) {
        z = x;
        x = y;
        y = z;
    }


    for (i = y; i < x + 1; i ++ ) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    if (x % 2 != 0) {
        soma = soma - x;
    } else if (y % 2 != 0){
        soma = soma - y;
    }

    printf("Soma dos impares = %d", soma);

    return 0;
}
