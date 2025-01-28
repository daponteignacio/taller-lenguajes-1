/*
    14. Escriba una función que reciba un número entero y retorne el número resultante de invertir la
    posición de todos sus dígitos. Por ejemplo, si se pasa como argumento el número 1234 la función
    deberá retorna el número 4321.
*/

#include <stdio.h>

int main()
{

    int num, dig, total = 0;

    printf("Ingrese un número: ");
    scanf("%d", &num);

    while (num > 0)
    {
        dig = num % 10;
        total = total * 10 + dig;
        num /= 10;
    }

    printf("Total = %d\n", total);

    return 0;
}