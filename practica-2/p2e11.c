/*
    11. Analice y ejecute el siguiente código:
        a) ¿Qué imprime el programa? 13, 23, 33, 43, 53, 63, 73, 83, 93, 103
        b) ¿Por qué razón se ve modificada la variable vector? ¿Es correcto realizar esto? Se ve modificada porque la variable p apunta al primer elemento del vector. Es correcto.
        c) ¿Qué ocurre si en la línea 7 cambia *p por vector[i]? El resultado no cambia
        d) Cambie la línea 8 por p+=1. ¿Qué sucede? El resultado no cambia.
        e) Cambie la línea 8 por p+=2. ¿Qué sucede? Accede a las posiciones par del arreglo. El problema es que las últimas 5 posiciones se accede de manera errónea.
*/

#include <stdio.h>

int main()
{
    int vector[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;
    int *p = vector;
    for (i = 0; i < 10; i++)
    {
        *p += 3;
        printf("vector[%d] = %d \n", i, *p);
        // printf("vector[%d] = %d \n", i, vector[i]); // Probando inciso c)
        // p++;
        // p += 1; // Probando inciso d)
        p += 2; // Probando inciso e)
    }
    return 0;
}