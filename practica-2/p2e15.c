#include <stdio.h>
#include <string.h>

#define DIM 100

char *reemplazar(char str[], char a, char b);

int main()
{
    char str[DIM] = "murcielago";

    printf("Antes: %s\n", str);
    printf("Después: %s\n", reemplazar(str, 'a', 'o'));

    return 0;
}

char *reemplazar(char str[], char a, char b)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == a)
        {
            str[i] = b;
        }
    }
    return str; // Retorna el mismo puntero que recibió
}
