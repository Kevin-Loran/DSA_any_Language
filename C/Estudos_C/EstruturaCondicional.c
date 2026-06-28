#include <stdio.h>
#include <string.h>

int main() {
    int hora;

    printf("Digite o horario: ");
    scanf("%d", &hora);


    if ((hora >= 5) && (hora < 12)){
        printf("Bom dia");
    }
    else if ((hora >= 12) && (hora <= 18)) {
        printf("Boa tarde");
    }
    else if ((hora > 18 ) && (hora <= 23)) {
        printf("Boa noite");
    }

    printf(resultado);
    return 0;
}
