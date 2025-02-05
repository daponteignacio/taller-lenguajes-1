/*
    5. La función strcpy recibe dos punteros a cadenas de caracteres y copia la cadena apuntada por el segundo (incluyendo el carácter nulo) en la cadena apuntada por el primero.
    Además, la función retorna el primer puntero. Implemente su propia versión de la función strcpy.
    Nota: asuma que la primera cadena de caracteres tiene espacio suficiente para almacenar a la segunda.
*/
#define DIM 100
#include <stdio.h>

char *my_strcpy(char[], const char[]);

int main()
{
    char str1[DIM], str2[DIM] = "Hofsdfla";

    char *str = my_strcpy(str1, str2);

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str = %s\n", str);

    return 0;
}

char *my_strcpy(char str1[], const char str2[])
{
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0'; // Agregar carácter nulo al final

    return str1;
}
