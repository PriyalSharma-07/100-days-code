#include <stdio.h>

int main()
{
    char str[200];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("%s", str);

    return 0;
}