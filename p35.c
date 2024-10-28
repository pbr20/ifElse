// p35

#include <stdio.h>

int main()
{

    int T;

    scanf("%d", &T);

    int X, Y, Z;

    X = T / 100;
    Y = (T - (X * 100)) / 10;
    Z = (T - (X * 100) - (Y * 10));

    int A, B, C;

    A = (X * 100) + (Y * 10) + Z;
    B = (Y * 100) + (Z * 10) + X;
    C = (Z * 100) + (X * 10) + Y;

    printf("%d\n", (A + B + C));

    return 0;
}