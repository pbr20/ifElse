// Codeforce s1 p-o

#include <stdio.h>

int main()
{

    int A, B;
    char X;

    scanf("%d%c%d", &A, &X, &B);

    if (X == '+')
    {
        A = A + B;
    }

    else if (X == '-')
    {
        A = A - B;
    }

    else if (X == '*')
    {
        A = A * B;
    }

    else
    {
        A = A / B;
    }

    printf("%d\n", A);

    return 0;
}