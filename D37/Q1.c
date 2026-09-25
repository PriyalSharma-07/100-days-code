#include <stdio.h>

int main()
{
    int a[10][10], sum[10];
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
    {
        sum[i] = 0;

        for (j = 0; j < c; j++)
            sum[i] += a[i][j];
    }

    for (i = 0; i < r; i++)
        printf("%d ", sum[i]);

    return 0;
}