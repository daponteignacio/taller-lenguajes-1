// 12. Escriba  una  función  que  reciba  un  arreglo  unidimensional  e  invierta  el  orden  de  sus  valores.  Por ejemplo: { 1, 2, 3, 4 } -> { 4, 4, 2, 1 }

#define DIM 8

#include <stdio.h>

void swap(int *, int *);

int main()
{
    int arr[DIM] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *p = arr;
    int *aux;
    int limit = DIM / 2;

    for (int i = 0; i < DIM; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < limit; i++)
    {
        aux = arr + (DIM - 1 - i);
        swap(p, aux);
        p++;
    }

    for (int j = 0; j < DIM; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}

void swap(int *a, int *b)
{
    printf("%p->%d %p->%d\n", a, *a, b, *b);
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}