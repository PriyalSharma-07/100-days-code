#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
        i++;

    printf("Length=%d\n", i);

    return 0;
}