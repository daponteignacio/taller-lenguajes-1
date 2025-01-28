#include <stdio.h>

int main()
{

    int i;
    for (i = 0; i <= 11; i++)
        printf("%d, ", i); // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
    printf("\n");
    for (i = 0; i <= 11; ++i)
        printf("%d, ", i); // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
    printf("\n");
    for (i = 2; i <= 11; i += 2)
        printf("%d, ", i); // 2, 4, 6, 8, 10
    printf("\n");
    for (i = 1; i <= 11; i *= 2)
        printf("%d, ", i); // 1, 2, 4, 8
    printf("\n");
    for (i = 11; i >= 1; i -= 2)
        printf("%d, ", i); // 11, 9, 7, 5, 3, 1
    printf("\n");
    for (i = 11; i > 1; i = +1)
        printf("%d, ", i); // 11
    printf("\n");

    return 0;
}