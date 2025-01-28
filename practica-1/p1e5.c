#include <stdio.h>

int main()
{

    int i = 1;

    for (i = 1; i < 51; i++)
    {
        if ((i % 5) == 0)
        {
            printf("El nro %d es múltiplo de 5\n", i);
        }
    }

    return 0;
}