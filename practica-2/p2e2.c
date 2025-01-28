/*
    2. Escriba 3 funciones que reciban un arreglo unidimensional de float y que:
        a. retorne el promedio de sus valores.
        b. retorne el mínimo de sus valores.
        c. retorne la posición del máximo de sus valores.
*/

#define DIM 15
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void cargar(float[], int);
float promedio(const float[], int);
float minValue(const float[], int);
int maxValuePos(const float[], int);

int main()
{
    srand(time(NULL));
    float arr[DIM];

    cargar(arr, DIM);

    printf("El promedio de valores es %.1f\n", promedio(arr, DIM));
    printf("El valor mínimo es %.1f\n", minValue(arr, DIM));
    printf("La posicion del valor máximo es %d\n", maxValuePos(arr, DIM));

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

float promedio(const float v[], int dim)
{
    float total = 0;

    for (int i = 0; i < dim; i++)
        total += v[i];

    return total / dim;
}

float minValue(const float v[], int dim)
{
    float min = 999999999.0;

    for (int i = 0; i < dim; i++)
    {
        if (v[i] < min)
            min = v[i];
    }

    return min;
}

int maxValuePos(const float v[], int dim)
{
    float max = -1.0;
    int pos = 0;

    for (int i = 0; i < dim; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            pos = i;
        }
    }

    return pos;
}