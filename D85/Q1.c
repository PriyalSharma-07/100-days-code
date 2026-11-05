#include <stdio.h>

enum Numbers {
    FIRST = 10,
    SECOND = 11,
    THIRD = 12,
    FOURTH = 13
};

int main() {
    printf("%d %d %d %d", FIRST, SECOND, THIRD, FOURTH);
    return 0;
}