#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int main()
{

    int time = 50;

    system("cls");
    for (int i = 5; i <= 30; i++)
    {
        gotoxy(i, 6);

        printf("*");
        Sleep(time);
    }

    for (int i = 7; i <= 28; i++)
    {
        gotoxy(5, i);

        printf("*");
        Sleep(time);
    }

    for (int i = 6; i <= 22; i++)
    {
        gotoxy(i, 16);

        printf("*");
        Sleep(time);
    }

    for (int i = 6; i <= 28; i++)
    {
        gotoxy(34, i);

        printf("*");
        Sleep(time);
    }

    for (int i = 35; i <= 60; i++)
    {
        gotoxy(i, 28);

        printf("*");
        Sleep(time);
    }

    for (int i = 27; i >= 6; i--)
    {
        gotoxy(60, i);

        printf("*");
        Sleep(time);
    }

    for (int i = 90; i >= 65; i--)
    {
        gotoxy(i, 6);

        printf("*");
        Sleep(time);
    }

    for (int i = 6; i <= 28; i++)
    {
        gotoxy(64, i);

        printf("*");
        Sleep(time);
    }

    for (int i = 65; i <= 90; i++)
    {
        gotoxy(i, 28);

        printf("*");
        Sleep(time);
    }

    for (int i = 6; i <= 28; i++)
    {
        gotoxy(94, i);

        printf("*");
        Sleep(time);
    }

    for (int i = 94, j = 16; i <= 110, j <= 28; i++, j++)
    {
        gotoxy(i, j);

        printf("*");
        Sleep(time);
    }

    for (int i = 94, j = 18; i <= 110, j >= 6; i++, j--)
    {
        gotoxy(i, j);

        printf("*");
        Sleep(time);
    }

    for (int i = 6; i <= 28; i++)
    {
        gotoxy(135, i);

        printf("*");
        Sleep(time);
    }

    for (int i = 135; i <= 160; i++)
    {
        gotoxy(i, 28);

        printf("*");
        Sleep(time);
    }

    for (int i = 27; i >= 6; i--)
    {
        gotoxy(160, i);

        printf("*");
        Sleep(time);
    }
    getchar();

    return 0;
}
