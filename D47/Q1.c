#include <stdio.h>

int main()
{
    char str1[200], str2[200];
    int count[256] = {0};
    int i;

    scanf("%s", str1);
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
        count[(unsigned char)str1[i]]++;

    for (i = 0; str2[i] != '\0'; i++)
        count[(unsigned char)str2[i]]--;

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");

    return 0;
}