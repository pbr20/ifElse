// Codeforce s1 p-m

#include <stdio.h>

int main()
{

    char A;

    scanf("%c", &A);

    if (A >= 48 && A <= 57)
    {
        printf("IS DIGIT\n");
    }

    else if (A >= 65 && A <= 90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }

    else
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }

    return 0;
}