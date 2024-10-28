// bee1051

#include <stdio.h>
int main()
{

    float a;

    scanf("%f", &a);

    if (a >= 0.00 && a <= 2000.00)
    {
        printf("Isento\n");
    }

    else if (a >= 2000.01 && a <= 3000.00)
    {
        a = a - 2000;
        a = a * 0.08;
        printf("R$ %.2f\n", a);
    }

    else if (a >= 3000.01 && a <= 4500.00)
    {
        a = a - 3000;
        a = (a * 0.18) + 80;
        printf("R$ %.2f\n", a);
    }

    else if (a > 4500.00)
    {
        a = a - 4500;
        a = (a * 0.28) + 350;
        printf("R$ %.2f\n", a);
    }

    return 0;
}