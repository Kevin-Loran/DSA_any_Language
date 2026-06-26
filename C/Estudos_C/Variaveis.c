#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    float salario, altura;
    char genero;
    char nome[50];

    idade = 20;
    salario = 1.700;
    altura = 1.90;
    genero = 'M';
    strcpy(nome, "Joao Silva");

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;

}
