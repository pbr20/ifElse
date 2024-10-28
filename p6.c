// bee1046

#include <stdio.h>

int main()
{

    int S, E, N;

    scanf("%d%d", &S, &E);

    if (S >= E)
    {
        N = (24 - S) + E;
    }
    else
    {
        N = E - S;
    }

    printf("O JOGO DUROU %d HORA(S)\n", N);

    return 0;
}