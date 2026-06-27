#include <stdio.h>
#include <string.h>

int main() {
    double altura, salario;
    int idade;
    char nome[50];

    printf("\nDigite o primeiro nome: ");
    scanf(" %s", nome);

    printf("\nDigite a idade: ");
    scanf(" %d", &idade);

    printf("\nDigite sua altura: ");
    scanf(" %lf", &altura);

    printf("\nDigite seu salario: ");
    scanf(" %lf", &salario);

    printf("%s tem %d anos, %.2lf Metros e ganha $ %.3lf  ", nome, idade, altura, salario);


    return 0;
}
