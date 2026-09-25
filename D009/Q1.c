#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, root1, root2, real, imaginary;

    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Real and Distinct Roots\n");
        printf("Root1=%.2f, Root2=%.2f\n", root1, root2);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);

        printf("Real and Equal Roots\n");
        printf("Root1=Root2=%.2f\n", root1);
    }
    else
    {
        real = -b / (2 * a);
        imaginary = sqrt(-d) / (2 * a);

        printf("Complex Roots\n");
        printf("Root1=%.2f+%.2fi\n", real, imaginary);
        printf("Root2=%.2f-%.2fi\n", real, imaginary);
    }

    return 0;
}