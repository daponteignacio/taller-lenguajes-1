// 9. Rehaga el ejercicio 2 de la sección Arreglos Estáticos, pero en este caso escribiendo una única función que retorne los 3 valores pedidos.

/*
    Old -> 2. Escriba 3 funciones que reciban un arreglo unidimensional de float y que:
        a. retorne el promedio de sus valores.
        b. retorne el mínimo de sus valores.
        c. retorne la posición del máximo de sus valores.
*/

#define DIM 5
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void cargar(float[], int);
void haceTodo(const float[], int, float *, float *, int *);

int main()
{
    srand(time(NULL));
    float arr[DIM];

    cargar(arr, DIM);

    float prom, min;
    int maxPos;

    haceTodo(arr, DIM, &prom, &min, &maxPos);

    printf("El promedio de valores es %.1f\n", prom);
    printf("El valor mínimo es %.1f\n", min);
    printf("La posicion del valor máximo es %d\n", maxPos);

    return 0;
}

void cargar(float v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        int rand1 = rand() % 500;
        int rand2 = rand() % 500;

        v[i] = rand1 + rand2 * 0.4;

        printf("%d.\t%.1f\n", i, v[i]);
    }

    printf("\n\n");
}

void haceTodo(const float v[], int dim, float *prom, float *min, int *maxPos)
{
    float total = 0, min_temp = 999999999.0, max = -1.0;
    int pos = 0;

    for (int i = 0; i < dim; i++)
    {
        total += v[i];

        if (v[i] < min_temp)
            min_temp = v[i];

        if (v[i] > max)
        {
            max = v[i];
            pos = i;
        }
    }

    *prom = total / dim;
    *min = min_temp;
    *maxPos = pos;
}
