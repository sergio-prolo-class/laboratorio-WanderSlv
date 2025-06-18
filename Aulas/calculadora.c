#include <stdio.h>

int main()
{
    float x, y, resultado;
    char operacao;

    printf("Entre com a operação: ");
    scanf("%f %c %f", &x, &operacao, &y);

    switch (operacao) {
        case '+':
            resultado = x + y;
            printf("valor resultado da conta: %2.f\n", resultado);
            break;

        case '-':
            resultado = x - y;
            printf("valor resultado da conta: %2.f\n", resultado);
            break;

        case '*':
            resultado = x * y;
            printf("valor resultado da conta: %2.f\n", resultado);
            break;

        case '/':
            if (y == 0) {
                printf("Erro: Divisão por zero\n");
            } else {
                resultado = x / y;
                printf("valor resultado da conta: %2.f\n", resultado);
            }
            break;

        default:
            printf("Erro: Operação inválida\n");
    }
}