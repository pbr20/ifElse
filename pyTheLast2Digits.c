// codeforce s1 py

#include <stdio.h>

int main()
{

    long long int A, B, C, D, r;

    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    r = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;

    printf("%d\n", r);

    return 0;
}