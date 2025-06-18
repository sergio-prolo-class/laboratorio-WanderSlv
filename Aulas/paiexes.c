#include <stdio.h>

int main()
{
    float phMax, phMin, ph;
    int n_medicoes, n_medicoes_fora = 0;

    printf("Entre com a faixa de pH adequada: ");
    scanf("%f %f", &phMax, &phMin);

    printf("Entre com o número de medições: ");
    scanf("%d", &n_medicoes);

    printf("Entre com as medições de pH: ");

    for (int i = 0; i < n_medicoes; i++) {
        scanf("%f", &ph);

        if (ph < phMin || ph > phMax) {
            n_medicoes_fora++;
        }
    }

    printf("Numeros de medições fora da faixa: %d", n_medicoes_fora);

    return 0;
}