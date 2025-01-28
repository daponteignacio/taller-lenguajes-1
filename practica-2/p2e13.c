// 13. Escriba un programa que lea palabras desde teclado hasta leer la palabra "ZZZ". Informe la cantidad de palabras de longitud 5.

#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int total = 0;

    while (strcmp(str, "ZZZ") != 0)
    {
        printf("Ingrese una palabra (\"ZZZ\" para terminar): ");
        scanf("%s", str);
        if (strlen(str) == 5)
            total++;
    }

    printf("\nSe detuvo la ejecución del programa. La cantidad de palabras con 5 caracteres es %d\n", total);

    return 0;
}