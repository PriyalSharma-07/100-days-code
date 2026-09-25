#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("Result=%d\n", a + b);
            break;

        case '-':
            printf("Result=%d\n", a - b);
            break;

        case '*':
            printf("Result=%d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result=%d\n", a / b);
            else
                printf("Division by zero is not possible\n");
            break;

        case '%':
            if (b != 0)
                printf("Result=%d\n", a % b);
            else
                printf("Division by zero is not possible\n");
            break;

        default:
            printf("Invalid Operator\n");
    }

    return 0;
}