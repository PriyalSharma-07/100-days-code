#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Unable to create file.");
        return 1;
    }

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data successfully saved to info.txt");

    return 0;
}