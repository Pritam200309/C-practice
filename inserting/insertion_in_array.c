#include <stdio.h>

int main()
{
    int arr[100], size, x, pos;

    printf("Enter the size of the array\n");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element you want to insert\n");
    scanf("%d", &x);

    printf("Enter the position you want to enter\n");
    scanf("%d", &pos);
    size++;

    for (int i = size - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}