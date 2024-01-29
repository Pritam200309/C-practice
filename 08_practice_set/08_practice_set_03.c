#include <stdio.h>

int strln(char *st);

int main()
{
    char st[] = "Pritam";
    int i = strln(st);
    printf("The length of this string is %d", i);
    return 0;
}

int strln(char *st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
// #include <stdio.h>

// int strln(char *st);

// int main()
// {
//     char st[] = "Pritam";
//     int i = strln(st);
//     printf("The length of this string is %d", i);
//     return 0;
// }

// int strln(char st[])
// {
//     char *ptr = st;
//     int len = 0;
//     while (*ptr != '\0')
//     {
//         len++;
//         ptr++;
//     }
//     return len;
// }