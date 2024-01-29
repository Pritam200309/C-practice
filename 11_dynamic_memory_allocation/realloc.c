#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Your %d element is: %d\n", i, ptr[i]);
    }

    // Reallocate ptr using realloc()
    ptr = realloc(ptr, 8 * sizeof(int));

    for (int i = 0; i < 8; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        printf("Your %d element is: %d\n", i, ptr[i]);
    }
    return 0;
}