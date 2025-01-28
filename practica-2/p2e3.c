// Escriba  una  función  que  reciba  una  matriz  A  y  un  número  c,  y  que  retorne  en  A  la  multiplicación escalar cA.

#define FIL 5
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargar(int[][COL], int f);
void imprimir(const int[][COL], int);
void escalar(int[][COL], int, int);

int main()
{
    srand(time(NULL));
    int mtx[FIL][COL];

    cargar(mtx, FIL);
    imprimir(mtx, FIL);
    escalar(mtx, FIL, 5);
    printf("\n");
    imprimir(mtx, FIL);

    return 0;
}

void cargar(int mat[][COL], int f)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            mat[i][j] = rand() % 500;
        }
    }
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

void escalar(int mat[][COL], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            mat[i][j] *= c;
        }
    }
}