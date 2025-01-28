// 6. Escriba un programa que lea un número entero desde teclado y luego informe la cantidad de veces que aparece cada dígito en el mismo.

#include <stdio.h>

int main()
{

    int n, n_copy;
    printf("Ingrese un número entero: ");
    scanf("%d", &n);
    n_copy = n;

    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (n_copy > 0)
    {
        int dig = n_copy % 10;
        printf("dig: %d - ", dig);
        arr[dig]++;
        n_copy = n_copy / 10;
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d -> %d\n", i, arr[i]);
    }

    return 0;
}