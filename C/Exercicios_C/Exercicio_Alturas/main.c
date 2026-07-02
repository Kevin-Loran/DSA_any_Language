#include <stdio.h>
#include <string.h>
int main()
{
    int x, i, idade;
    int soma = 0;
    double altura, media, porcentagem, porcentagemReal;
    double somaAltura = 0;

    char nome[50];

    printf("Quantas pessoas voce ira digitar: ");
    scanf(" %d", &x);

    char pessoasMenos[x][50];


    for (i = 0; i < x; i++) {
        printf("\nDados da %d pessoa: ", i+1);
        printf("\nNome: ");
        scanf(" %[^\n]", nome);
        printf("Idade: ");
        scanf(" %d", &idade);
        printf("Altura: ");
        scanf(" %lf", &altura);

        if (idade < 16) {
            strcpy(pessoasMenos[i], nome);
            soma = soma + 1;
        }

        somaAltura = somaAltura + altura;
    }

    media = somaAltura / i;
    porcentagem = (soma * 100.0) / x;

    printf("\nAltura media = %.2lf", media);
    printf("\nPessoas com menos de 16 anos: %.2lf %%", porcentagem);
    for (i = 0; i < x; i++) {
        printf(" \n%s", pessoasMenos[i]);
    }


    return 0;
}
