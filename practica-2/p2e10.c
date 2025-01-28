/*
    ¿Puede explicar qué significado tienen los valores impresos? En los casos que se usa %p se imprimen direcciones de memoria. En el caso de los formatos %d se imprime el valor al que apunta 'p'
    ¿Qué ocurre cuando se incrementa en uno el puntero “p”? Pasa al siguiente elemento del arreglo ya que inicialmente apuntaba al primero
*/

#include <stdio.h>
int main()
{
    int *p;
    int x[5] = {1, 2, 3, 4, 5};
    p = x;

    printf("La direccion memoria de p es %p \n", &p);   // Valor hexadecimal X
    printf("La direccion la que apunta p es %p \n", p); // Valor hexadecimal y
    printf("El valor al que apunta p es %d \n", *p);    // 1
    p++;
    printf("La direccion memoria de p ahora es %p \n", &p);   // Valor hexadecimal X
    printf("La direccion la que apunta p ahora es %p \n", p); // Valor hexadecimal y + 1
    printf("El valor al que apunta p ahora es %d \n", *p);    // 2

    return 0;
}