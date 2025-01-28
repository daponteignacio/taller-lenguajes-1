#define DIM 5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargar(int[][DIM], int f);
void imprimir(const int[][DIM], int);
void invertir(int[][DIM], int);

int main()
{
    srand(time(NULL));
    int mtx[DIM][DIM];

    cargar(mtx, DIM);
    imprimir(mtx, DIM);
    invertir(mtx, DIM);
    printf("\n");
    imprimir(mtx, DIM);

    return 0;
}

void cargar(int mat[][DIM], int f)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            mat[i][j] = rand() % 500;
        }
    }
}

void imprimir(const int mat[][DIM], int f)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
}

void invertir(int mat[][DIM], int f)
{
    int aux;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j != i)
            {
                aux = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = aux;
            }
        }
    }
}