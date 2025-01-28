/*
    18.  Escriba un programa que imprima 15 números generados  pseudo-aleatoriamente. ¿La secuencia
    generada es siempre la misma? ¿Por qué? ¿Qué se  puede hacer para generar secuencias pseudo-
    aleatorias diferentes?

    Nota:  para  generar  números  en  forma pseudo-aleatoria  investigue  las  funciones  rand()  y srand(), las cuales se encuentran definidas en la biblioteca <stdlib.h>.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    for (int i = 0; i < 15; i++)
    {
        printf("%6d -> %6d\n", i + 1, rand());
    }

    return 0;
}