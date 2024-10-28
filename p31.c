// Codeforce s1 px

#include <stdio.h>

int main()
{
    int l1, r1, l2, r2, S, E;

    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    if (l1 > l2)
    {
        S = l1;
    }
    else
    {
        S = l2;
    }

    if (r1 < r2)
    {
        E = r1;
    }
    else
    {
        E = r2;
    }

    if (S <= E)
    {
        printf("%d %d\n", S, E);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}