// Codeforce s1 pw

#include <stdio.h>

int main()
{

    int A, B, S;
    char X, Y;

    scanf("%d %c %d %c %d", &A, &X, &B, &Y, &S);

    if (X == '+')
    {
        if ((A + B) == S)
        {
            printf("Yes\n");
        }

        else
        {
            printf("%d", (A + B));
        }
    }

    if (X == '-')
    {
        if ((A - B) == S)
        {
            printf("Yes\n");
        }

        else
        {
            printf("%d", (A - B));
        }
    }

    if (X == '*')
    {
        if ((A * B) == S)
        {
            printf("Yes\n");
        }

        else
        {
            printf("%d", (A * B));
        }
    }

    return 0;
}