/*
13. Un número primo es un número natural mayor que 1, que tiene dos divisores distintos
únicamente: él mismo y el 1.
    a. Escriba una función que reciba como parámetro un número entero n y determine si el
    mismo es primo o no.
    b. Escriba un programa que lea números enteros desde teclado hasta que la cantidad de
    números primos leídos sea 5.
*/

#include <stdio.h>

int main()
{

    int n;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i != 1 && i != n)
        {
            if (n % i == 0)
            {
                printf("El número %d no es primo.\n", n);
                return 0;
            }
        }
    }

    printf("El número %d ES primo.\n", n);

    return 0;
}