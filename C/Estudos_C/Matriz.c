#include <stdio.h>
#include <string.h>

int main () {
    int m, n , i , j;

    printf("Digite quantas linhas vai ter a matriz: ");
    scanf(" %d", &m);
    printf("Digite quantas colunas vai ter a matriz: ");
    scanf(" %d", &n);

    int mat[m][n];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento[%d,%d]: ", i, j);
            scanf(" %d", &mat[i][j]);
        }
    }

    printf("\nnumeros digitados: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d" ,mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
