#include <stdio.h>

int main()
{
    int a[101], n, i, value, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &value);

    pos = n;

    for (i = 0; i < n; i++)
    {
        if (value < a[i])
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = value;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}