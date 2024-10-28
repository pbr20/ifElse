// bee1060

#include <stdio.h>

int main()
{

    double n[6];
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &n[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (n[i] > 0)
        {
            count++;
        }
    }

    printf("%d valores positivos\n", count);

    return 0;
}