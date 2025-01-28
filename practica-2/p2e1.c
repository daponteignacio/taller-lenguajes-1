/*
    1. Escriba un programa que genere 50 números enteros en forma pseudoaleatoria y que los almacene en
    un arreglo unidimensional. Luego de realizada la carga, informar la cantidad de números pares que
    se  encuentran  en  posiciones  impares  del  arreglo  y  también  la  cantidad  de  números  impares  que  se
    encuentran en posiciones pares.
*/

#define DIM 50
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int cantPares(const int[], int);
int cantImpares(const int[], int);

int main()
{
    srand(time(NULL));
    int arr[DIM];

    cargar(arr, DIM);

    printf("La cantidad de elementos pares en posiciones impares es %d\n", cantPares(arr, DIM));
    printf("La cantidad de elementos impares en posiciones pares es %d\n", cantImpares(arr, DIM));

    return 0;
}

int cargar(int v[], int dim)
{
    for (int i = 0; i < DIM; i++)
    {
        v[i] = rand() % 21;
    }
}

int cantPares(const int v[], int dim)
{
    int total = 0;

    for (int i = 1; i < dim; i += 2)
    {
        if (v[i] % 2 == 0)
            total++;
    }

    return total;
}

int cantImpares(const int v[], int dim)
{
    int total = 0;

    for (int i = 0; i < dim; i += 2)
    {
        if (v[i] % 2 != 0)
            total++;
    }

    return total;
}