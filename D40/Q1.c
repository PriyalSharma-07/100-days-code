#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, d;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (d = 0; d <= r + c - 2; d++)
    {
        for (i = 0; i < r; i++)
        {
            j = d - i;

            if (j >= 0 && j < c)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}