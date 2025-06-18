#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SEGREDO 100

int main()
{
    int palpite, segredo, quantidade = 0;

    srand(time(NULL));
    segredo = 1 + rand() % MAX_SEGREDO;

    do {
        printf("Entre com o seu palpite (1 a %d): ", MAX_SEGREDO);
        scanf("%d", &palpite);
        quantidade++;

        if (palpite > segredo) {
            printf("O segredo é menor que o palpite\n");
        } else if (palpite < segredo) {
            printf("O segredo é maior que o palpite\n");
        }

    } while (palpite != segredo);

    printf("Parabéns, você acertou em %d tentativas!\n", quantidade);

    return 0;
}
