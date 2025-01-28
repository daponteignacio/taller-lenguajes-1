// 14. Escriba  un  programa  que  lea  palabras  desde  teclado  hasta  leer  la  palabra  "XXX".  Se  requiere informar la cantidad de palabras ingresadas que terminan con la letra ‘o’.

#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int total = 0;

    while (strcmp(str, "XXX"))
    {
        printf("Ingrese una palabra: ");
        scanf("%s", str);
        if (str[strlen(str) - 1] == 'o')
        {
            total++;
        }
    }

    printf("La cantidad de palabras terminadas en 'o' es %d\n", total);

    return 0;
}