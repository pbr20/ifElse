// bee1043

#include <stdio.h>

int main()
{

    float a, b, x, m;
    double y, p;

    scanf("%f%f%f", &a, &b, &x);

    if (a > b && a > x)
    {
        m = a;
    }

    else if (b > a && b > x)
    {
        m = b;
    }

    else if (x > a && x > b)
    {
        m = x;
    }

    if (m == a)
    {
        if ((b + x) > a)
        {
            p = a + b + x;
            printf("Perimetro = %.1lf\n", p);
        }
        else if ((b + x) <= a)
        {
            y = 0.5 * (a + b) * x;
            printf("Area = %.1lf\n", y);
        }
    }

    else if (m == b)
    {
        if ((a + x) > b)
        {
            p = a + b + x;
            printf("Perimetro = %.1lf\n", p);
        }
        else if ((a + x) <= b)
        {
            y = 0.5 * (a + b) * x;
            printf("Area = %.1lf\n", y);
        }
    }

    else if (m == x)
    {
        if ((b + a) > x)
        {
            p = a + b + x;
            printf("Perimetro = %.1lf\n", p);
        }
        else if ((b + a) <= x)
        {
            y = 0.5 * (a + b) * x;
            printf("Area = %.1lf\n", y);
        }
    }

    return 0;
}