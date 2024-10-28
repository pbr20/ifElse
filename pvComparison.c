// Codeforce s1 pv

#include <stdio.h>

int main()
{

    int A, B;
    char S;

    scanf("%d %c %d", &A, &S, &B);

    if (S == '<')
    {
        if (A < B)
        {
            printf("Right\n");
        }

        else
        {
            printf("Wrong\n");
        }
    }

    if (S == '>')
    {
        if (A > B)
        {
            printf("Right\n");
        }

        else
        {
            printf("Wrong\n");
        }
    }

    if (S == '=')
    {
        if (A == B)
        {
            printf("Right\n");
        }

        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}