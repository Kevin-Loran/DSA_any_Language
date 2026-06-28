#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int lenght) {
        fgets(buffer, lenght, stdin);
        strtok(buffer, "\n");
}

int main()
{
    char nome1[50], nome2[50];
    double salario1, salario2;
    char genero;
    int idade;

    printf("Digite a salario da pessoa 1: ");
    scanf(" %lf", &salario1);
    printf("Digite o nome da pessoa 1: ");
    limpar_entrada();
    ler_texto(nome1, 50);

    printf("\nDigite a salario da pessoa 2: ");
    scanf(" %lf", &salario2);
    printf("Digite o nome da pessoa 2: ");
    limpar_entrada();
    ler_texto(nome2, 50);

    printf("\nDigite a idade: ");
    scanf(" %d", &idade);
    printf("Digite se genero: ");
    limpar_entrada();
    scanf(" %c", &genero);

    printf("pessoa 1: \n nome: %s \n salario: %lf \n", nome1, salario1);
    printf("pessoa 2: \n nome: %s \n salario: %lf \n", nome2, salario2);
    printf("idade: %d genero: %c", idade, genero);

    return 0;

}
