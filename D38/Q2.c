#include <stdio.h>

int main()
{
    int a[10][10], n, i, j;
    int symmetric = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("Symmetric Matrix\n");
    else
        printf("Not Symmetric Matrix\n");

    return 0;
}