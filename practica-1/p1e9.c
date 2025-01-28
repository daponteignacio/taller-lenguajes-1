/*
    9. Escriba un programa que lea 2 números enteros y un carácter, el cual debe corresponderse con un
    operador matemático (+, -, /, x), y a partir de ellos imprima el resultado de realizar la operación
    pedida en pantalla. En caso de que el carácter no represente un operador válido, imprima un
    mensaje de error. Reflexione sobre las diferentes estructuras de control que puede utilizar.
*/

#include <stdio.h>

int main()
{

    int a, b;
    char c;

    printf("Ingrese un número: ");
    scanf("%d", &a);

    printf("Ingrese otro número: ");
    scanf("%d", &b);

    printf("Ingrese un operador ( + - * / ): ");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d + %d = %d\n", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %f\n", a, b, (float)a / b);
        break;

    default:
        printf("El operador ingresado no es válido.\n");
        break;
    }

    return 0;
}