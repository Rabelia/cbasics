#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    int a, b, c, x1, x2, n, x;

    printf("Podaj a: ");
    scanf_s("%d", &a);

    printf("Podaj b: ");
    scanf_s("%d", &b);

    printf("Podaj c: ");
    scanf_s("%d", &c);

    printf("Twoja funkcja ma postac: %d x^2 + %d x + %d\n", a, b, c);

    printf("Podaj przedzial w jakim chcesz zapisac wyniki w formacie x1:x2 : ");
    scanf_s("%d:%d", &x1, &x2);

    printf("Podaj ilosc wynikow, ktore chesz zapisac: ");
    scanf_s("%d", &n);

    int r = (x1 - x2)/n;

    for (int i = 0; i <n ; i++)
    {
        if (x1<=x2)
        {
            x = a * x1 * x1 + b * x1 + c;
            x1 += r;
            printf("%d\n",x);
        }

        FILE * fp;

        fp = fopen ("C:\\Users\\orbit\\OneDrive\\Pulpit\\file.txt", "a");
        fprintf(fp, "%d\n", x);

        fclose(fp);
    }

    return 0;
}
