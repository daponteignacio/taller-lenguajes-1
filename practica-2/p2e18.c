/*
    6. Escriba  un  programa  que  lea  una  palabra  desde  teclado  y  luego  informe  la  cantidad  de  veces  que aparece cada letra de la palabra leída en ella misma.
    Nota: asuma que la palabra está formada sólo por letras minúsculas.
*/

#define ABC 26
#define DIM 100

#include <stdio.h>
#include <string.h>

int main()
{

    int cant[ABC] = {0};
    char abc[] = "abcdefghijklmnopqrstuvwxyz";
    char str[DIM] = "abcdeffghijklmnopqrstuvwxyzzz";

    for (int i = 0; i < strlen(str); i++)
    {
        int index = (int)str[i] - 97;
        cant[index]++;
    }

    int aux = 1;

    for (int j = 0; j < ABC; j++)
    {
        printf("%c [%d]\t", abc[j], cant[j]);
        if (aux % 3 == 0)
        {
            printf("\n");
        }
        aux++;
    }
    printf("\n");

    return 0;
}