#include <stdio.h>

int main()
{
    char binary[100];
    int i;

    scanf("%s", binary);

    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else
        {
            printf("Invalid Binary Number\n");
            return 0;
        }
    }

    printf("1's Complement=%s\n", binary);

    return 0;
}