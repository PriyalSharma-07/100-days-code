#include <stdio.h>

int main()
{
    int n, digit;
    int product = 1;
    int found = 0;

    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
            found = 1;
        }

        n = n / 10;
    }

    if (found == 1)
        printf("Product of odd digits=%d\n", product);
    else
        printf("No odd digits\n");

    return 0;
}