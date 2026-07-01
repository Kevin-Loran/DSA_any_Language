#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menor, a, b, c;

    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Segundo valor: ");
    scanf("%d", &b);
    printf("Terceiro valor: ");
    scanf("%d", &c);

    if ((a < b) && (a < c)) {
        menor = a;
    }
    else if ((b < a) && (b < c)) {
        menor = b;
    }
    else {
        menor = c;
    }

    printf("\nMENOR = %d", menor);

    return 0;
}
