#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    int result = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        result ^= a[i];

        if (i > 0)
            result ^= i;
    }

    printf("%d", result);

    return 0;
}