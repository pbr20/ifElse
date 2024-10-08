// bee1038

#include <stdio.h>

int main()
{

    int X, Y;
    double t;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X == 1)
    {
        t = Y * 4.00;
    }

    else if (X == 2)
    {
        t = Y * 4.50;
    }

    else if (X == 3)
    {
        t = Y * 5.00;
    }

    else if (X == 4)
    {
        t = Y * 2.00;
    }

    else if (X == 5)
    {
        t = Y * 1.50;
    }

    printf("Total: R$ %.2lf\n", t);

    return 0;
}