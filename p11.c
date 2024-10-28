// bee1042

#include <stdio.h>

int main()
{

    int a, b, x, m, n;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);

    if (a <= b && a <= x)
    {
        m = a;
    }

    else if (b <= a && b <= x)
    {
        m = b;
    }
    else if (x <= a && x <= b)
    {
        m = x;
    }

    if (m == a)
    {
        printf("%d\n", m);
    }

    if (m == b)
    {
        printf("%d\n", m);
    }

    if (m == x)
    {
        printf("%d\n", m);
    }

    if (a != m && (a <= b || a <= x) && a >= m)
    {
        n = a;
    }

    else if (b != m && (b <= a || b <= x) && b >= m)
    {
        n = b;
    }

    else if (x != m && (x <= a || x <= b) && x >= m)
    {
        n = x;
    }

    if (n == a)
    {
        printf("%d\n", n);
    }

    if (n == b)
    {
        printf("%d\n", n);
    }

    if (n == x)
    {
        printf("%d\n", n);
    }

    if (a != m && a != n)
    {
        printf("%d\n", a);
    }

    else if (b != m && b != n)
    {
        printf("%d\n", b);
    }

    else if (x != m && x != n)
    {
        printf("%d\n", x);
    }

    printf("\n");

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", x);

    return 0;
}
