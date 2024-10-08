// bee1036

#include <stdio.h>
#include <math.h>

int main()
{

    double A, B, C, R1, R2;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    if (A == 0 || (B * B) < (4 * A * C))
    {
        printf("Impossivel calcular\n");
    }

    else
    {
        R1 = (-B + sqrt((B * B) - (4 * A * C))) / (2 * A);
        R2 = (-B - sqrt((B * B) - (4 * A * C))) / (2 * A);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    return 0;
}