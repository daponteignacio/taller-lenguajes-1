#include <stdio.h>

int main()
{

    float km = 0;

    scanf("%f", &km);

    printf("Valor leído en km = %.2f\n", km);

    printf("El equivalente en millas es %.2f\n", km / 1.61);

    return 0;
}