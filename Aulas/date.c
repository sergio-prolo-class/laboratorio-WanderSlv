#include <stdio.h>

int main()
{
    int dia, mes, ano;
    int mesValido = 1;

    printf("Digite a data no formato 'dd/mm/aaaa': ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    switch (mes) {
        case 1:
            printf("Janeiro ");
            break;
        case 2:
            printf("Fevereiro ");
            break;
        case 3:
            printf("Março ");
            break;
        case 4:
            printf("Abril ");
            break;
        case 5:
            printf("Maio ");
            break;
        case 6:
            printf("Junho ");
            break;
        case 7:
            printf("Julho ");
            break;
        case 8:
            printf("Agosto ");
            break;
        case 9:
            printf("Setembro ");
            break;
        case 10:
            printf("Outubro ");
            break;
        case 11:
            printf("Novembro ");
            break;
        case 12:
            printf("Dezembro ");
            break;
        default:
            printf("mes inexistente.\n");
            mesValido = 0;
            break;
    }
    if (mesValido) {
        switch (dia) {
            case 1:
            case 21:
            case 31:
                printf("%dst", dia);
                break;
            case 2:
            case 22:
                printf("%dnd", dia);
                break;
            case 3:
            case 23:
                printf("%drd", dia);
                break;
            default:
                printf("%dth", dia);
                break;
        }
        printf(" %d\n", ano);
    } else {
        printf("programa encerrado.\n");
    }

    return 0;
}