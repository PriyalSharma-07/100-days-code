#include <stdio.h>

int main() {
    int n, i;
    int totalSum = 0, leftSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }

        leftSum += nums[i];
    }

    printf("-1\n");

    return 0;
}