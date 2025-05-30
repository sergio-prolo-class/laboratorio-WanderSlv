#include <stdio.h>

#define POLEGADA_CM 2.54
#define PE_POLEGADAS 12

int main()
{
    float pes, polegadas, altura_cm;

    printf("Digite a sua altura em pés: ");
    scanf("%f", &pes);
    printf("Digite a sua altura em polegadas: ");
    scanf("%f", &polegadas);

    altura_cm = ((pes * PE_POLEGADAS) + polegadas) * POLEGADA_CM;

    printf("Altura em metros: %.2f m\n", altura_cm / 100);
    return 0;
}