#include <stdio.h>

int main()
{
    int a[100], n, i, value, position = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &value);

    for (i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        printf("Element Not Found\n");
    }
    else
    {
        for (i = position; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;

        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }

    return 0;
}