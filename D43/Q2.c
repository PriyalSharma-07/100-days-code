#include <stdio.h>

int main()
{
    char str[200];
    int i, length = 0, palindrome = 1;

    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
        length++;

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}