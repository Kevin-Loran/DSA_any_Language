#include <stdio.h.>
#include <string.h>

int main() {
    char nome[50];
    char sexo;
    double salario;
    int idade;

    salario = 1.800;
    idade = 19;
    sexo = 'F';
    strcpy(nome, "Maria Silva");

    printf("a funcionaria %s, sexo: %c, ganha %.3lf e tem %d anos  ", nome, sexo, salario, idade);

    return 0;
}
