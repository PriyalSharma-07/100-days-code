#include <stdio.h>

int main()
{
    int n, i, flag = 1;

    scanf("%d", &n);

    if (n <= 1)
        flag = 0;
    else
    {
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    return 0;
}