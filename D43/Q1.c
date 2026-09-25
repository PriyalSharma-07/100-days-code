#include <stdio.h>

int main()
{
    char str[200], temp;
    int i, length = 0;

    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
        length++;

    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    str[length] = '\0';

    printf("%s\n", str);

    return 0;
}