#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, media;

    printf("Aluno primeiro digite as duas notas\n");
    printf("Digite a primeira nota: ");
    scanf(" %lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf(" %lf", &nota2);

    media = nota1 + nota2;
    printf("\nNota final = %lf", media);

    if (media > 60.00) {
        printf("\nAPROVADO\n");
    } else {
        printf("\nREPROVADO\n");
    }

    printf("Aluno segundo digite as duas notas\n");
    printf("Digite a primeira nota: ");
    scanf(" %lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf(" %lf", &nota2);


    media = nota1 + nota2;
    printf("\nNota final = %lf", media);

    if (media > 60.00) {
        printf("\nAPROVADO\n");
    } else {
        printf("\nREPROVADO\n");
    }
    return 0;
}
