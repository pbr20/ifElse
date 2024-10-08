// bee 1045

#include <stdio.h>

int main()
{

    double A, B, C, X;

    scanf("%lf%lf%lf", &A, &B, &C);

    if (A > B && A > C)
    {
        if (C > B)
        {
            X = B;
            B = C;
            C = X;
        }
    }
    else if (B > A && B > C)
    {
        X = A;
        A = B;
        B = X;
        if (C > B)
        {
            B = C;
            C = X;
        }
    }
    else if (C > A && C > B)
    {
        X = A;
        A = C;
        C = X;
        if (B > C)
        {
            C = B;
            B = X;
        }
    }

    if (A >= (B + C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if ((A * A) == ((B * B) + (C * C)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if ((A * A) > ((B * B) + (C * C)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if ((A * A) < ((B * B) + (C * C)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B && A == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if ((A == B && A != C) || (B == C && B != A) || (A == C && A != B))
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}