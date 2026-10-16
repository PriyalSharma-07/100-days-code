#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, max = 0, count;

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++) {
        count = 0;

        for(j = i; s[j] != '\0'; j++) {
            for(k = i; k < j; k++) {
                if(s[k] == s[j])
                    break;
            }

            if(k != j)
                break;

            count++;
        }

        if(count > max)
            max = count;
    }

    printf("%d", max);

    return 0;
}