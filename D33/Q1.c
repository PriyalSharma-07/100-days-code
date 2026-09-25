#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid, position = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            position = mid;
            break;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (position != -1)
        printf("Found at position %d\n", position + 1);
    else
        printf("Not Found\n");

    return 0;
}