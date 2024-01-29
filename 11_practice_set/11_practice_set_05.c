#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 1; i <= 10; i++)
    {
        ptr[i] = 7 * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("7 * %d = %d\n", i, ptr[i]);
    }

    printf("\nAfter realloacting...\n\n");

    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 1; i <= 15; i++)
    {
        ptr[i] = 7 * i;
    }
    for (int i = 1; i <= 15; i++)
    {
        printf("7 * %d = %d\n", i, ptr[i]);
    }

    return 0;
}