// 16. La función strlen recibe un puntero a una cadena de caracteres y retorna su longitud (sin incluir el carácter nulo). Implemente su propia versión de la función strlen.

#define DIM 100
#include <stdio.h>

int my_strlen(char[]);

int main()
{

    char str[DIM] = "123456789";

    printf("El string tiene %d carácteres.\n", my_strlen(str));

    return 0;
}

int my_strlen(char str[])
{
    char c;
    int i = 0, total = 0;

    c = str[i];
    while (c != '\0')
    {
        printf("%c(%d) ", c, total);
        i++;
        total++;
        c = str[i];
    }
    printf("\n");

    return total;
}
