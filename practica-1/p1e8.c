#include <stdio.h>

int main()
{

    ejD();

    return 0;
}

ejA()
{
    int edad;
    if (edad >= 40)
        printf("Tiene %d años o más", edad);
    else
        printf("Tiene menos de %d años", edad);
}

ejB()
{
    int total, x = 1;
    while (x <= 10)
    {
        total += x;
        ++x;
    }
    printf("Total = %d", total); // Se estaba usando la máscara incorrecta.
}

ejC()
{
    int valor;
    scanf("%d", &valor);

    switch (valor % 2)
    {
    case 0:
        printf("El valor es par");
        break; // Faltaba el break
    case 1:
        printf("El valor es impar");
        break; // Faltaba el break
    default:
        break; // faltaba la opcion default
    }
}

ejD()
{
    int x, y;
    scanf("%d", &x); // No usaba el &
    scanf("%d", &y); // No usaba el &
    printf("x + y = %d ", x + y);
}