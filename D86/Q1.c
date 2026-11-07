#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int choice, a, b;

    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case ADD:
            printf("Result = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}