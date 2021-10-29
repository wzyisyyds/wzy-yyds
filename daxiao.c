#include <stdio.h>

int main()
{
    int a[10] = {7, 8, 9, 6, 5, 4, 3, 2, 1, 0};
    int i;
    int c;
    for (i = 1; i < 10; i++)
    {
        if (a[i - 1] < a[i])
        {
            c = a[i - 1];
            a[i - 1] = a[i];
            a[i] = c;
            i = 0;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
}