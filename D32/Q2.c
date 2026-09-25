#include <stdio.h>

int main()
{
    long long n;
    int count[10] = {0};
    int digit, i, maxDigit = 0;

    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        count[0] = 1;

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (i = 1; i < 10; i++)
    {
        if (count[i] > count[maxDigit])
            maxDigit = i;
    }

    printf("Most frequent digit=%d\n", maxDigit);

    return 0;
}