// bee1047

#include <stdio.h>

int main()
{

    int Ih, Im, Eh, Em, nh, nm;

    scanf("%d%d%d%d", &Ih, &Im, &Eh, &Em);

    if (Ih > Eh)
    {
        if (Im > Em)
        {
            nh = ((24 - Ih) + Eh) - 1;
        }
        else if (Im <= Em)
        {
            nh = (24 - Ih) + Eh;
        }
    }
    else if (Ih == Eh)
    {
        if (Im == Em)
        {
            nh = (24 - Ih) + Eh;
        }
        else if (Im > Em)
        {
            nh = (23 - Ih) + Eh;
        }
        else
        {
            nh = 0;
        }
    }
    else if (Ih < Eh)
    {
        if (Im > Em)
        {
            nh = Eh - Ih - 1;
        }
        else if (Im <= Em)
        {
            nh = Eh - Ih;
        }
    }

    if (Im > Em)
    {
        nm = (60 - Im) + Em;
    }
    else if (Im == Em)
    {
        if (Ih == Eh)
        {
            nm = 0;
        }
        else if (Ih != Em)
        {
            nm = (60 - Im) + Em;
        }
    }
    else
    {
        nm = Em - Im;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", nh, nm);

    return 0;
}