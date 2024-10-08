// bee1066

#include <stdio.h>

int main()
{

    int n[5];
    int ce = 0;
    int co = 0;
    int cp = 0;
    int cn = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (n[i] % 2 == 0)
        {
            ce++;
        }
        if (n[i] % 2 != 0)
        {
            co++;
        }
        if (n[i] > 0)
        {
            cp++;
        }
        if (n[i] < 0)
        {
            cn++;
        }
    }

    printf("%d valor(es) par(es)\n", ce);
    printf("%d valor(es) impar(es)\n", co);
    printf("%d valor(es) positivo(s)\n", cp);
    printf("%d valor(es) negativo(s)\n", cn);

    return 0;
}