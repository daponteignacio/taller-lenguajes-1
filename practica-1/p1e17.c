// 17. Escriba una función que reciba como argumento un número entero n y que dentro de ella lea nnúmeros flotantes desde teclado. La función debe retornar el mínimo y el máximo número leído.

#include <stdio.h>

void minmanx(int, float *, float *);

int main()
{
    int n;
    float min = 1000000.0, max = -1000000.0;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    minmanx(n, &min, &max);
    printf("MIN = %.2f\nMAX = %.2f\n", min, max);

    return 0;
}

float leer()
{
    float aux;
    printf("Ingrese un número flotante: ");
    scanf("%f", &aux);
    return aux;
}

void minmanx(int n, float *min, float *max)
{
    float aux = leer();
    *min = aux;
    *max = aux;

    for (int i = 1; i < n; i++)
    {
        aux = leer();
        if (aux < *min)
            *min = aux;
        if (aux > *max)
            *max = aux;
    }
}
