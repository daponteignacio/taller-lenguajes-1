#define FIL 5
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargar(int[][COL], int f);
void imprimir(const int[][COL], int);
void sumar(int[][COL], int[][COL], int[][COL], int);

int main()
{
    srand(time(NULL));
    int mtxA[FIL][COL];
    int mtxB[FIL][COL];
    int mtxC[FIL][COL];

    cargar(mtxA, FIL);
    cargar(mtxB, FIL);
    cargar(mtxC, FIL);

    imprimir(mtxA, FIL);
    printf("+\n");
    imprimir(mtxB, FIL);
    printf("+\n");
    imprimir(mtxC, FIL);
    printf("=\n");
    sumar(mtxA, mtxB, mtxC, FIL);
    imprimir(mtxA, FIL);

    return 0;
}

void cargar(int mat[][COL], int f)
{
    static int n = 2;

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            // mat[i][j] = rand() % 500;
            mat[i][j] = n;
        }
    }

    n++;
}

void imprimir(const int mat[][COL], int f)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
}

void sumar(int matA[][COL], int matB[][COL], int matC[][COL], int f)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            matA[i][j] = matA[i][j] + matB[i][j] + matC[i][j];
        }
    }
}