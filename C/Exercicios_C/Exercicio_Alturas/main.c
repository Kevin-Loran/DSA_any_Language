#include <stdio.h>
#include <string.h>

int main()
{
    int x, i, idade, soma;
    double altura, somaAltura, media, porcentagem, porcentagemReal;

    char nome[50];

    printf("Quantas pessoas voce ira digitar: ");
    scanf(" %d", &x);

    char pessoasMenos[x][50];


    for (i = 0; i < x; i++) {
        printf("Dados da %d pessoa: ", i+1);
        printf("Nome: ");
        fgets(nome, 50, stdin);
        printf("\nIdade: ");
        scanf(" %d", &idade);
        printf("\nAltura: ");
        scanf(" %lf", &altura);

        if (idade < 16) {
            strcpy(pessoasMenos[i], nome);
            soma = soma + 1;
        }

        somaAltura = somaAltura + altura;
    }

    media = somaAltura / i;
    porcentagem = (soma / i) * 100;

    printf("\nAltura media = %lf", altura);
    printf("\nPessoas com menos de 16 anos: %lf", porcentagem);
    for (i = 0; i < x; i++) {
        printf(" \n%s", pessoasMenos[i]);
    }


    return 0;
}
