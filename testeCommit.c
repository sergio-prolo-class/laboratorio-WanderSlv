#include <stdio.h>

int main()
{
    float altura, largura, profundidade;
    float total, area, valor;
    int qtd_caixa;

    printf("Digite a Altrua (m): ");
    scanf("%f", &altura);

    printf("Digite a Largura (m): ");
    scanf("%f", &largura);

    printf("Digite a Profundidade (m): ");
    scanf("%f", &profundidade);

    area = 2 * (largura * altura) + 2 * (largura * profundidade) + 2 * (altura * profundidade);
    total = altura * largura * profundidade;

    printf("A área é: %f m² e o valor é o %f m³\n", area, total);

    // att 2
    printf("Digite a quantidade de caixas: ");
    scanf("%d", &qtd_caixa);

    valor = 0.5 * qtd_caixa;

    printf("Valor total é: %f\n", valor);
    return (0);
}