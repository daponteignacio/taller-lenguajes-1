// 12. Escriba un programa que imprima la raíz cuadrada, el cuadrado y el cubo de los números enteros comprendidos en el rango 1..10.

#include <stdio.h>
#include <math.h>

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        printf("%10d -> %10.2f %10.2f %10.2f\n", i, sqrt(i), pow(i, 2), pow(i, 3));
    }

    return 0;
}