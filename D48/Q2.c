#include <stdio.h>

int main()
{
    char str[200], temp;
    int i, start, end;

    fgets(str, sizeof(str), stdin);

    i = 0;

    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;

        start = i;

        while (str[i] != ' ' &&
               str[i] != '\n' &&
               str[i] != '\0')
        {
            i++;
        }

        end = i - 1;

        while (start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("%s", str);

    return 0;
}