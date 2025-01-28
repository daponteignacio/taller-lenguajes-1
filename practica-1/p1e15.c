/*
    Escriba una función que reciba como parámetro un número entero y retorne como resultado el
    número factorial del mismo.
        a. Resolviéndolo de forma iterativa.
        b. Resolviéndolo de forma recursiva
*/

#include <stdio.h>

void iterativa(int);
int recursiva(int);
int recursivaBucle(int, int);

int main()
{
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    // iterativa(n);
    recursiva(n);

    return 0;
}

void iterativa(int n)
{
    int total = 1, dig;

    for (int i = n; i > 0; i--)
    {
        total *= i;
    }

    printf("TOTAL = %d\n", total);
}

int recursivaBucle(int n, int total)
{
    if (n == 0)
        return total;
    total = n * recursivaBucle(n - 1, total);
}

int recursiva(int n)
{
    int total = 1;

    if (n == 0)
        printf("%d! = 1", n);

    printf("%d\n", recursivaBucle(n, total));
}
