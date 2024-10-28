// Codeforce s1 p-p

#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    N = N / 1000;

    if (N % 2 == 0)
    {
        printf("EVEN\n");
    }

    else
    {
        printf("ODD\n");
    }

    return 0;
}