#include <stdio.h>
#include <stdlib.h>

int main()
{
    double largura, altura, valor, area, resultado;

    printf("Digite a largura do terreno: ");
    scanf(" %lf", &largura);

    printf("Digite a altura do terreno: ");
    scanf(" %lf", &altura);

    printf("Digite o valor do terreno: ");
    scanf(" %lf", &valor);

    area = largura * altura;

    resultado = area * valor;

    printf("\nMetro quadrado do terreno: %.2lf", area);
    printf("\nValor do terreno: %.2lf", resultado);



    return 0;
}
