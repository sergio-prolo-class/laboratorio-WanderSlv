#include <stdio.h>

char decompor(float x, int *parte_int, float *parte_frac)
{
}

int main()
{
    float x, parte_frac;
    int parte_int;

    printf("Entre com um número real:");
    scanf("%f", &x);
    char sinal = decompor(x, &parte_int, &parte_frac);
    printf("Parte INT: %c\n", sinal);
    printf("Interia%d\n", *parte_int);
    printf("fracionarai: %f\n", *parte_frac);

    return 0;
}