// bee1040

#include <stdio.h>

int main()
{

    float N1, N2, N3, N4, N5;
    double M;

    scanf("%f", &N1);
    scanf("%f", &N2);
    scanf("%f", &N3);
    scanf("%f", &N4);

    M = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / (2 + 3 + 4 + 1);

    printf("Media: %.1lf\n", M);

    if (M >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }

    else if (M < 5.0)
    {
        printf("Aluno reprovado.\n");
    }

    else if (M >= 5.0 && M <= 6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%f", &N5);
        printf("Nota do exame: %.1f\n", N5);

        M = (M + N5) / 2;

        if (M >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }

        else if (M <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", M);
    }
    return 0;
}