// 7. El objetivo del siguiente código es leer dos caracteres de teclado e imprimirlos en pantalla. ¿El código cumple con su cometido? En caso negativo, corríjalo para que lo haga.
#include <stdio.h>

int main()
{
    char a, b;

    printf("Ingrese el primer caracter:\n");
    scanf(" %c", &a); // Debe agregarse un espacio en el primer parámetro para indicar que se ignoren espacios y saltos de linea.
    printf("Se leyó el caracter: %c\n", a);

    printf("Ingrese el segundo caracter:\n");
    scanf(" %c", &b); // Debe agregarse un espacio en el primer parámetro para indicar que se ignoren espacios y saltos de linea.
    printf("Se leyó el caracter: %c\n", b);

    return 0;
}