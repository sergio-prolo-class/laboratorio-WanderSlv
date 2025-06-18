#include <stdio.h>

int main()
{
    int qntd_chuva, reserv = 0;

    for (int i = 0; i < 7; i++) {
        printf("Entre com a quantidade de chuva no dia %d em litros: ", i + 1);
        scanf("%d", &qntd_chuva);

        reserv += qntd_chuva;

        if (reserv <= 400) {
            reserv = 400 - qntd_chuva;
            printf("O reservatório não transbordou. Espaço livre: %d litros\n", reserv);
        } else {
            i += 1;
            printf("O reservatório transbordou no dia: %d .\n", i);
            break;
        }
    }

    return 0;
}
