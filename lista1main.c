#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void zadanie1()
{
    printf("Katarzyna Drzewiecka\n");
    printf("\"Podstawy Programowania 2020/2021\"");
}
void zadanie2()
{
    int a = 123123123;
    printf("Katarzyna Drzewiecka\t\tRabelia.art\nMail: rabelia.art@gmail.com\tPage: www.rabelia.art.com\nTel: %d", a);
}
void zadanie3()
{
    char a = 'a';
    char b = 'b';
    int c = 2;
    int d = 3;
    float e = 2.1;
    float f = 2.2;
    double g = 2.4;
    double h = 3.4;
    printf("%c, %c, %d, %d, %f, %f, %f, %f", a, b, c, d, e, f, g, h);
}
void zadanie4()
{
    int myAge = 22;
    int daysInYear = 365;
    int myAgeDays = myAge * daysInYear;
    printf("%d", myAgeDays);
}
void zadanie5()
{
    int r;
    printf("Podaj promien w cm: ");
    scanf_s("%d", &r);
    double const pi = 3.14159;
    double spower = r * r;
    double tpower = r * r * r;
    double v = 4.0 / 3 * pi * tpower;
    double a = 4 * pi * spower;
    printf("Objetosc = %f cm3,\nPole = %f cm2", v, a);
}
void zadanie6()
{
    printf("Podaj cyfre: ");
    int a;
    scanf_s("%d", &a);
    printf("Podales liczbe: %d", a);
}
void zadanie7()
{
    float mSalary;
    const float EUR = 0.22;
    const float USD = 0.26;

    printf("Podaj wartosc miesiecznej wyplaty: ");
    scanf_s("%f", &mSalary);

    float ySalary = mSalary * 12;
    float eur = mSalary * EUR * 12;
    float usd = mSalary * USD * 12;

    printf("Zarobki roczne: %f, zarobki eur: %f, zarobki usd: %f", ySalary, eur, usd);
}
void zadanie9()
{
    printf("3,5^4+7^0.5-12.23^(-3)= %f", pow(3.5, 4) + sqrt(7) - pow(12.23, (-3)));
}
void zadanie10()
{
    int time;

    printf("Podaj czas w sekundach: ");
    scanf_s("%d", &time);

    int times = time % 60;
    int timem = (time - times) /60;
    timem = timem % 60;
    int timeh = (time - timem) / 3600;



    printf("%d sekund to: \n %d godzin, %d minut i %d sekund", time, timeh, timem, times);
}
void zadanie11()
{
    char a;
    int i;
    float f;
    double d;
    printf("char - %d bajtow,\n int - %d bajtow,\n float - %d bajtow,\n double - %d bajtow", sizeof(a), sizeof(i), sizeof(f), sizeof(d));
}
void zadanie12()
{
    int l, l1, l2, m, m1, m2;

    printf("Podaj ulamek w formacie licznik/mianownik: ");
    scanf_s("%d/%d", &l1, &m1);
    printf("\nPodaj drugi ulamek w formacie licznik/mianownik: ");
    scanf_s("%d/%d", &l2, &m2);

    l = l1 * m2 + l2 * m1;
    m = m1 * m2;

    printf("\nOto Twoj wymik: %d/%d", l, m);
}
void zadanie13()
{
    int sum;
    sum = 25 + 37 - 19;
    printf (" Odpowiedzia jest %d.\n", sum);
}
void zadanied1()
{
    const float milesToKm = 1.609;
    const float galonToL = 3.785;
    float distanceM;
    float fuelG;

    printf("Wprowadz liczbe przejechanych mil i ilosc spalonych przy tym galonow paliwa (w postaci galony/mile): ");
    scanf_s("%f/%f", &fuelG, &distanceM);

    float burGM = fuelG / distanceM;
    printf("Spalanie wynosi %.1f galonow na mile.\n", burGM);

    float distanceKm = distanceM * milesToKm;
    float fuelL = fuelG * galonToL;
    float burLKm = fuelL / distanceKm / 100;

    printf("Spalanie wynosi %.1f litrow na 100km.", burLKm);
}
void zadanied2()
{
    const float g = 9.81;
    float mass;

    printf("Podaj swoja masa ciala w kg: ");
    scanf_s("%f", &mass);

    float yourgf = mass * g;

    printf("Sila przyciagania ziemskiego dla Twojej masy ciala wynosi: %.2f N.", yourgf);
}
void zadanied3()
{
    int num;

    printf("podaj dodatnia liczbe trzycyfrowa: ");
    scanf_s("%d", &num);

    int h = num/100;
    int d = num%100/10;
    int u = num%10;

    printf("%d", u);
    printf("%d", d);
    printf("%d", h);
}
void zadanied3a()
{
    char num[3];

    printf("Podaj dodatnia liczbe trzycyfrowa: ");
    scanf_s("%s", &num);

    _strrev(num);

    printf("%s", num);
}
void zadanied4()
{
    int d, m, e;
    printf("Wpisz numer telefonu stacjonarnego w formacie XX XXX XXXX: \n");
    scanf_s("%d %d %d", &d, &m, &e);

    int epart1 = e / 100;
    int epart2 = e - epart1 * 100;

    printf("(%d) %d-%d-%d", d, m, epart1, epart2);
}
void zadanied5()
{
    int amount;

    printf("Podaj kwote w zl:");
    scanf_s("%d", &amount);

    int fiveh = amount / 500;
    int twoh = amount % 500 / 200;
    int oneh = amount % 500 % 200 / 100;
    int fifty = amount % 100 / 50;
    int twenty = amount % 50 / 20;
    int ten = amount % 20 / 10;
    int coins = amount % 10;

    printf("-nominal 500z³: %d\n-nominal 200z³: %d\n-nominal 100z³: %d\n-nominal 50z³: %d\n-nominal 20z³: %d\n-nominal 10z³: %d\n-bilon: %d\n", fiveh, twoh, oneh, fifty, twenty, ten, coins);
}
void zadanied6() {
    int x;

    printf("Podaj liczbe calkowita: ");
    scanf_s("%d", &x);

    printf("%d", somemath(x));
}
int somemath(int y)
{
    int x = 2 * pow(y, 5) - 4 * pow(y, 4) - 2 * pow(y, 3) - 6 * pow(y, 2) + y - 7;
    return x;
}
void zadanied6a()
{
    int x, y;

    printf("Podaj liczbe calkowita: ");
    scanf_s("%d", &x);

    y = x * (x * (x * (x * (2 * x - 4) - 2) - 6) + 1) - 7;

    printf("%d", y);
}
void zadanied7()
{
    unsigned int a, b, c;
    printf("Podaj dwie liczby naturalne w formacie a, b: ");
    scanf_s("%d, %d", &a, &b);

    c = a + b - a % b;

    printf("Najblizsza wielokrotnosc liczby a w stosunku do liczby b to : %d", c);
}
void zadanied8()
{
    char a = 'a';

    printf("%d\n", printf("%c\n", a));

    char b;

    scanf_s("%c", &b);
    printf("%d", scanf_s("%c", &b));
}
int wczytaj_zadanie(int y)
{
    switch (y)
    {
    case 1:
        zadanie1();
        break;

    case 2:
        zadanie2();
        break;

    case 3:
        zadanie3();
        break;

    case 4:
        zadanie4();
        break;

    case 5:
        zadanie5();
        break;

    case 6:
        zadanie6();
        break;

    case 7:
        zadanie7();
        break;

    case 9:
        zadanie9();
        break;

    case 10:
        zadanie10();
        break;

    case 11:
        zadanie11();
        break;

    case 12:
        zadanie12();
        break;

    case 13:
        zadanie13();
        break;

    case 14:
        zadanied1();
        break;

    case 15:
        zadanied2();
        break;

    case 16:
        zadanied3();
        break;

    case 17:
        zadanied3a();
        break;

    case 18:
        zadanied4();
        break;

    case 19:
        zadanied5();
        break;

    case 20:
        zadanied6();
        break;

    case 21:
        zadanied6a();
        break;

    case 22:
        zadanied7();
        break;

    case 23:
        zadanied8();
        break;
    }
}

int main()
{
    int zadanie;
    printf("Lista 1:\nzadanie 1 -> 1       zadanie 2 -> 2       zadanie 3 -> 3       zadanie 4 -> 4\nzadanie 5 -> 5       zadanie 6 -> 6       zadanie 7 -> 7       zadanie 9 -> 9\nzadanie 10 -> 10     zadanie 11 -> 11     zadanie 12 -> 12     zadanie 13 -> 13\n");
    printf("Zadania dodatkowe:\nzadanie dodatkowe 1 -> 14                 zadanie dodatkowe 2 -> 15\nzadanie dodatkowe 3 -> 16                 zadanie dodatkowe 3a -> 17\nzadanie dodatkowe 4 -> 18                 zadanie dodatkowe 5 -> 19\nzadanie dodatkowe 6 -> 20                 zadanie dodatkowe 6a -> 21\nzadanie dodatkowe 7 -> 22                 zadanie dodatkowe 8 -> 23\n");
    printf("\nPodaj numer zadania: ");
    scanf_s("%d", &zadanie);

    wczytaj_zadanie(zadanie);

    return 0;
}
