#include <stdio.h>

int damePar();

int main()
{

    int n, par;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        par = damePar();
        printf("%d\t", par);
    }

    return 0;
}

int damePar()
{
    int static par = -2;
    return par += 2;
}