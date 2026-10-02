#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    long long sum;

    scanf("%d", &n);

    sum = (long long)n * (n + 1) / 2;
    x = (int)sqrt(sum);

    if ((long long)x * x == sum)
        printf("%d", x);
    else
        printf("-1");

    return 0;
}