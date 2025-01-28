// Se supone que la función swap intercambia el valor de sus dos parámetros enteros, ¿funciona correctamente? Si no es así, modifique la función swap para que lo haga.

#include <stdio.h>

void swap(int *, int *);

int main()
{
    int x, y;
    x = 10;
    y = 20;
    printf("x=%d\ty=%d\n", x, y);
    swap(&x, &y); // Se trabajaba con los valores en lugar de las referencias.
    printf("x=%d\ty=%d\n", x, y);
    return 0;
}

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a; // guarda el valor de a
    *a = *b;  // almacena b en a
    *b = tmp; // almacena a en b
}
