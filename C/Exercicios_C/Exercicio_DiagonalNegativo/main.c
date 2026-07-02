#include <stdio.h>
#include <string.h>

int main()
{
    int m ,i, j;
    int contador = 0;

    printf("Qual a ordem da matriz: ");
    scanf(" %d", &m);

    int vet[m][m];

    for (i = 0; i <  m; i++) {
        for (j = 0; j < m; j++) {
             printf("Elemento[%d][%d]: ", i, j);
             scanf(" %d", &vet[i][j]);
             if (vet[i][j] < 0){
                contador = contador + 1;
             }
        }
    }

    printf("\nnumeros negativos: %d", contador);
    printf("\nvertical principal: ");
    for (i = 0; i <  m; i++) {
            printf("%d ", vet[i][i]);
    }
    return 0;
}
