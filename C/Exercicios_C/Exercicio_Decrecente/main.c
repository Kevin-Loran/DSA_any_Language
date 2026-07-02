#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, y;

    for (i = 0; i < 2; i++) {
         printf("Digite dois numeros: \n");
         scanf(" %d",&x);
         scanf(" %d",&y);

         if (x < y) {
            printf("\nCrescente.\n");
         }
         else if (x > y) {
            printf("\nDecrescente.\n");
         }

    }

    return 0;
}
