// Codeforce s1 p-n

#include <stdio.h>

int main()
{

    char A;

    scanf("%c", &A);

    if (A >= 65 && A <= 90)
    {
        A = A + 32;
    }

    else
    {
        A = A - 32;
    }

    printf("%c", A);

    return 0;
}