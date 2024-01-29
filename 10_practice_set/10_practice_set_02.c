#include <stdio.h>

int main()
{
    FILE *ptr;
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    ptr = fopen("text_02.txt", "w");
    for (int i = 0; i <= 10; i++)
    {
        fprintf(ptr, "%d * %d = %d\n", n, i, n * i);
    }
    fclose(ptr);
    return 0;
}