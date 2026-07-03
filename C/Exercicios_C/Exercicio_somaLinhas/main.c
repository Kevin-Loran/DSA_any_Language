#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n;

    printf("Digite o numero de linhas: ");
    scanf(" %d", &m);
    printf("Digite o numero de colunas: ");
    scanf(" %d", &n);
    int vet[m][n];
    int vetSoma[m];

    int soma = 0;
    for (i = 0; i < m; i++) {
        printf("Digite os elementos da %d a. linha:\n ");
        for (j = 0; j < n; j++) {
           scanf("%d",  &vet[i][j]);
           soma = soma + vet[i][j];
        }
        vetSoma[i] = soma;
        soma = 0;
    }

    printf("\nVetor Gerado: ");
    for (i = 0; i < m; i++) {
        printf("\n%d", vetSoma[i]);
    }
    return 0;
}
