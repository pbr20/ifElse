// Codeforce s1 p-r

#include <stdio.h>

int main()
{

    int N, Y, M, D;
    scanf("%d", &N);

    Y = N / 365;
    N = N - Y * 365;

    M = N / 30;
    D = N - M * 30;

    printf("%d years\n", Y);
    printf("%d months\n", M);
    printf("%d days\n", D);

    return 0;
}