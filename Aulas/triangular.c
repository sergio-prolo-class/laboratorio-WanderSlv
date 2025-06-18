#include <stdio.h>
#include <stdbool.h>

bool eh_triangular(int n1)
{
    int i = 1;
    int soma = 0;
    while (soma < n1) {
        soma = soma + i;
        i++;
    }
    return soma == n1;
}

int main()
{
    int n1;

    printf("Digite o numero inteiro: ");
    scanf("%d", &n1);
    if (eh_triangular(n1)) {
        printf("Triangular.\n");
    } else {
        printf("Nao Triangular\n");
    }
    return 0;
}
