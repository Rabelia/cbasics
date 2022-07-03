#include <stdio.h>
#include <math.h>
#include <Windows.h>

void zadanie1()
{
	int i, k, l;

	printf("Podaj trzy liczby calkowite w formacie 1, 2, 3: ");
	scanf_s("%d, %d, %d", &i, &k, &l);

	if (i >= k && i >= l)
		printf("Najwieksza liczba jest: %d.", i);
	else if (k >= i && k >= l)
		printf("Najwieksza liczba jest: %d.", k);
	else
		printf("Najwieksza liczba jest: %d.", l);
}
void zadanie1a()
{
	int i, k, l;

	printf("Podaj dwie liczby ujemne w formacie -1, -2: ");
	scanf_s("%d, %d", &i, &k);

	if (i < 0 && k < 0)
	{
		l = i + k;
		printf("Suma tych liczb to: %d.", l);
	}
	else
		printf("Podane liczby nie sa ujemne.");
}
void zadanie1b()
{
	int i, k, l;

	printf("Podaj dwie liczby calkowite o takim samym znaku w formacie 1, 2: ");
	scanf_s("%d, %d", &i, &k);

	if (i >= 0 && k >= 0)
	{
		l = i + k;
		printf("Suma tych liczb to: %d.", l);
	}
	else if (i < 0 && k < 0)
	{
		l = i + k;
		printf("Suma tych liczb to: %d.", l);
	}
	else
		printf("Podane liczby nie sa tych samych znakow.");

}
void zadanie2()
{
	double x, y;

	printf("Podaj dwie liczby w formacie 1.2 1.23: ");
	scanf_s("%lf %lf", &x, &y);

	if (x > y)
		printf("Pierwsza liczba jest wieksza.");
	else if (y > x)
		printf("Druga liczba jest wieksza.");
	else if (x == y)
		printf("Liczby sa rowne.");

}
void zadanie3()
{
	double x, a, b;

	printf("Podaj parametry funkcji liniowej (y = ax + b) w formacie a, b: ");
	scanf_s("%lf, %lf", &a, &b);

	x = (-(b)) / a;

	printf("Miejsce zerowe tej funkcji to: %lf", x);
}
void zadanie4()
{
	double d, x1, x2, a, b, c;

	printf("Podaj parametry funkcji kwadratowej (y = ax^2 + bx +c) w formacie a, b, c: ");
	scanf_s("%lf, %lf, %lf", &a, &b, &c);

	d = (b * b) - (4 * a * c);

	if (d == 0)
	{
		x1 = (-b) / (2 * a);
		printf("Funkcja posiada jedno miejsce zerowe:\n%lf.", x1);
	}
	else if (d > 0)
	{
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
		printf("Funkcja posiada dwa miejsca zerowe:\n%lf i %lf", x1, x2);
	}
	else
		printf("Funkcja nie posiada miejsc zerowych.");
}
void zadanie5()
{
	int i;
	printf("Podaj predkosc wiatru w wezlach: ");
	scanf_s("%d", &i);

	if (i < 1)
	{
		printf("Jest czisza.");
	}
	else if (1 <= i && i <= 3)
	{
		printf("Jest zefir.");
	}
	else if (4 <= i && i <= 27)
	{
		printf("Jest bryza.");
	}
	else if (28 <= i && i <= 47)
	{
		printf("Jest wichura.");
	}
	else if (48 <= i && i <= 63)
	{
		printf("Jest sztorm.");
	}
	else if (i > 63)
	{
		printf("Jest huragan.");
	}
}
void zadanie6()
{
	double x;

	printf("Podaj liczbe: ");
	scanf_s("%lf", &x);

	double wb = (x >= 0 ? x : -x);
	printf("|%f|=%f", x, wb);

	return 0;
}
void zadanie7()
{
	int i, k, l, max;

	printf("Podaj trzy liczby calkowite w formacie 1, 2, 3: ");
	scanf_s("%d, %d, %d", &i, &k, &l);


	max = (i > k ? i : k);
	max = (max > l ? max : l);

	printf("Najwieksza liczba jest: %d.", max);

}
void zadanie7a()
{
	int i, k;

	printf("Podaj dwie liczby ujemne w formacie -1, -2: ");
	scanf_s("%d, %d", &i, &k);

	(i < 0 && k < 0 ? printf("Suma tych liczb to: %d.", i + k) : printf("Podane liczby nie sa ujemne."));
}
void zadanie7b()
{
	int i, k;

	printf("Podaj dwie liczby calkowite o takim samym znaku w formacie 1, 2: ");
	scanf_s("%d, %d", &i, &k);

	((i < 0 && k < 0) || (i >= 0 && k >= 0) ? printf("Suma tych liczb to: %d.", i + k) : printf("Podane liczby nie sa tych samych znakow."));
}
void zadanie8()
{
	int i;

	printf("Podaj rok w postaci YYYY: ");
	scanf_s("%d", &i);

	((i % 4 == 0 && i % 100 != 0) || i % 400 == 0 ? printf("Rok %d jest przestepny.", i) : printf("Rok %d nie jest przestepny.", i));
}
void zadanie9()
{
	const int powietrze = 343;
	const int woda = 1490;
	const int stal = 5100;

	int i;
	double s, v;

	printf("W jakim osrodku ma sie rozchodzic dzwiek: \npowietrze - 1		woda - 2		stal - 3\n");
	scanf_s("%d", &i);

	printf("\nPodaj odleglosc, jaka ma zostac pokonana przez dzwiek: ");
	scanf_s("%lf", &s);

	if (i != 1 && i != 2 && i != 3)
		printf("Nie podales osrodka.");
	if (s <= 0)
		printf("Podales niepoprawna odleglosc.");

	switch (i)
	{
	case 1:
	{
		v = s / powietrze;
		break;
	}
	case 2:
	{
		v = s / woda;
		break;
	}
	case 3:
	{
		v = s / stal;
		break;
	}
	}

	printf("Czas w jakim dzwiek pokona cala droge to: %lf sekund/y.", v);
}
void zadanie10()
{
	char o;
	double x, y, r;

	printf("Podaj dzialanie w formie: liczba operator liczba: ");
	scanf_s("%lf %c %lf", &x, &o, 1, &y);

	if (o == '+')
		r = x + y;
	else if (o == '-')
		r = x - y;
	else if (o == '*')
		r = x * y;
	else if (o == '/' || o == ':')
		r = x / y;

	printf("Wynik dzialania to: %.2lf", r);
}
void zadanie10a()
{
	char o;
	double x, y, r;

	printf("Podaj dzialanie w formie: liczba operator liczba: ");
	scanf_s("%lf %c %lf", &x, &o, 1, &y);

	switch (o)
	{
		case '+':
			r = x + y;
			break;
		case '-':
			r = x - y;
			break;
		case '*':
			r = x * y;
			break;
		case '/':
			r = x / y;
			break;
		case ':':
			r = x / y;
			break;
	}
	printf("Wynik dzialania to: %.2lf", r);
}
void zadanie11()
{
	int i;

	printf("Podaj liczbe punktow (0-100): ");
	scanf_s("%d", &i);

	(i > 100 || i < 0 ? printf("Podales zla liczbe") : (i = i / 10));
	(i == 10 ? (i = i - 1) : (i = i));
	(i <= 5 && i >= 0 ? (i = 0) : (i = i));

	switch (i)
	{
		case 9:
			printf("Twoja ocena to A.");
			break;
		case 8:
			printf("Twoja ocena to B.");
			break;
		case 7:
			printf("Twoja ocena to C.");
			break;
		case 6:
			printf("Twoja ocena to D.");
			break;
		case 0:
			printf("Twoja ocena to E.");
			break;
	}
}
void zadanie12()
{
	char a;
	int i;

	printf("Podaj znak: ");
	scanf_s(" %c", &a);

	i = a;

	if (i >= 48 && i <= 57)
		printf("%c to cyfra.", a);
	else if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		printf("%c to litera.", a);
	else
		printf("%c to znak specjalny.", a);
}
void zadanied1()
{
	int i, o, t, h, th;

	printf("Podaj liczbe calkowita: ");
	scanf_s("%d", &i);

	th = i / 1000;
	h = i / 100;
	t = i / 10;
	o = i / 1;

	if (t == 0)
		printf("Liczba sklada sie z 1 cyfry.");
	else if (h == 0)
		printf("Liczba sklada sie z 2 cyfr.");
	else if (th == 0)
		printf("Liczba sklada sie z 3 cyfr.");
	else
		printf("Liczba sklada sie z 4 cyfr.");
}
void zadanied2()
{
	double x, y, z, w, min, max;
	printf("Podaj 4 liczby w formacie a, b, c, d: ");
	scanf_s("%lf, %lf, %lf, %lf", &w, &x, &y, &z);


	(w > z ? (w > y ? (w > x ? (max = w) : (max = x)) : (max = y)) : (x > z ? (x > y ? (max = x) : (max = y)) : (max = z)));

	(w < z ? (w < y ? (w < x ? (min = w) : (min = x)) : (min = y)) : (x < z ? (x < y ? (min = x) : (min = y)) : (min = z)));

	printf("Najwieksza liczba to: %lf.\nNajmniejsza liczba to: %lf.", max, min);
}
void zadanied3()
{
	int h, m;

	printf("Podaj godzine w formacie 00:00 : ");
	scanf_s("%d:%d", &h, &m);

	if (h > 12 && h < 24 && m != 0)
	{
		h = h - 12;
		(m < 10 ? printf("Jest godzina %d:0%d po poludniu.", h, m) : printf("Jest godzina %d:%d po poludniu.", h, m));
	}
	else if (h == 12 && m == 0)
		printf("Jest godzina %d:0%d w poludnie.", h, m);
	else if (h >= 0 && h < 12 && m != 0)
		(m < 10 ? printf("Jest godzina %d:0%d przed poludniem.", h, m) : printf("Jest godzina %d:%d przed poludniem.", h, m));
	else
		printf("Podales zla godzine.");
}
void zadanied4()
{
	int i;

	printf("Podaj cyfre od 1-5: ");
	scanf_s("%d", &i);

	switch (i)
	{
	case 1:
		Beep(400, 600);
		Sleep(1);
		break;
	case 2:
		Beep(400, 600);
		Beep(500, 600);
		Sleep(2);
		break;
	case 3:
		Beep(400, 600);
		Beep(500, 600);
		Beep(600, 600);
		Sleep(3);
		break;
	case 4:
		Beep(400, 600);
		Beep(500, 600);
		Beep(600, 600);
		Beep(700, 600);
		Sleep(4);
		break;
	case 5:
		Beep(400, 600);
		Beep(500, 600);
		Beep(600, 600);
		Beep(700, 600);
		Beep(800, 600);
		Sleep(5);
		break;
	default:
		printf("Podales zla liczbe.");
	}
}
void zadanied5()
{
	char a;
	double gb, p;

	printf("Podaj swoj pakiet:\nA - 39.99 zl miesiecznie. 100 GB danych. Doplata 5 zl za kazdy nadmiarowy gigabajt.\nB - 59.99 zl miesiecznie. 200 GB danych. Doplata 2 zl za kazdy nadmiarowy gigabajt.\nC - 69.99 zl miesiecznie. Bez limitu danych.\n");
	scanf_s(" %c", &a);

	printf("Podaj ilosc wykorzystanych GB: ");
	scanf_s("%lf", &gb);

	switch (a)
	{
		case 'A':
			p = 39.99;
			(gb <= 100 ? printf("Kwota do zaplaty wynosi %.2lfzl.", p) : printf("Kwota do zaplaty wynosi %.2lfzl.", (p + ((gb - 100) * 5))));
			break;
		case 'B':
			p = 59.99;
			(gb <= 200 ? printf("Kwota do zaplaty wynosi %.2lfzl.", p) : printf("Kwota do zaplaty wynosi %.2lfzl.", (p + ((gb - 200) * 2))));
			break;
		case 'C':
			printf("Kwota do zaplaty wynosi 69.99zl.");
			break;

		default:
			printf("Podales zly pakiet.\n");
	}
}
void zadanied6()
{
	char a;
	double gb;

	printf("Podaj swoj pakiet:\nA - 39.99 zl miesiecznie. 100 GB danych. Doplata 5 zl za kazdy nadmiarowy gigabajt.\nB - 59.99 zl miesiecznie. 200 GB danych. Doplata 2 zl za kazdy nadmiarowy gigabajt.\nC - 69.99 zl miesiecznie. Bez limitu danych.\n");
	scanf_s(" %c", &a);

	printf("Podaj ilosc wykorzystanych GB: ");
	scanf_s("%lf", &gb);

	const double pa = 39.99;
	const double pb = 59.99;
	const double pc = 69.99;

	switch (a)
	{
	case 'A':
		(gb <= 100 ? printf("Kwota do zaplaty wynosi %.2lfzl.", pa) : printf("Kwota do zaplaty wynosi %.2lfzl.", (pa + ((gb - 100) * 5))));
		if (pa + ((gb - 100) * 5) > pb)
			printf("Kwota do zaplaty przy pakiecie B wynosilaby o %.2lfzl mniej.", (pa + ((gb - 100) * 5) - pb));
		break;

	case 'B':
		(gb <= 200 ? printf("Kwota do zaplaty wynosi %.2lfzl.", pb) : printf("Kwota do zaplaty wynosi %.2lfzl.", (pb + ((gb - 200) * 2))));
		if (pb + ((gb - 100) * 5) > pc)
			printf("Kwota do zaplaty przy pakiecie C wynosilaby o %.2lfzl mniej.", (pb + ((gb - 100) * 5) - pc));
		break;

	case 'C':
		printf("Kwota do zaplaty wynosi %.2lfzl.", pc);
		break;

	default:
		printf("Podales zly pakiet.\n");
	}
}
void zadanied7()
{
	char a;
	double l, t;

	printf("Podaj osrodek, w ktorym rozchodzil sie dzwiek: \ndwutlenek wegla - d    powietrze - p    hel - h    wodor - w.\n");
	scanf_s(" %c", &a);

	printf("Podaj czas, ktory dzwiek potrzebowal, aby dotrzec od zrodla do punktu jego rejestracji w sekundach (pomiedzy 0-30s): ");
	scanf_s("%lf", &t);

	if (t < 0 || t > 30)
		printf("Podaj czas od 0 - 30 sekund.");


	const double d = 258.0;
	const double p = 331.5;
	const double h = 972.0;
	const double w = 1270.0;

	switch(a)
	{
		case 'd':
			l = t * d;
			printf("Dlugosc fali wynosi: %.2lf m.", l);
			break;

		case 'p':
			l = t * p;
			printf("Dlugosc fali wynosi: %.2lf m.", l);
			break;

		case 'h':
			l = t * h;
			printf("Dlugosc fali wynosi: %.2lf m.", l);
			break;

		case 'w':
			l = t * w;
			printf("Dlugosc fali wynosi: %.2lf m.", l);
			break;

		defalut:
			printf("Podales zly osrodek.");
			break;
	}
}
void zadanied8()
{
	int t;

	printf("Podaj temperature w stopniach Celsjusza: ");
	scanf_s("%d", &t);

	const int pta = -114;
	const int ptr = -39;
	const int ptt = -218;
	const int ptw = 0;

	const int pwa = 78;
	const int pwr = 357;
	const int pwt = -163;
	const int pww = 100;

	if (t <= pta)
		printf("Alkohol etylowy bedzie zamarzac.\n");
	if (t <= ptr)
		printf("Rtec bedzie zamarzac.\n");
	if (t <= ptt)
		printf("Tlen bedzie zamarzac.\n");
	if (t <= ptw)
		printf("Woda bedzie zamarzac.\n");

	if (t >= pwa)
		printf("Alkohol etylowy bedzie wrzec.\n");
	if (t >= pwr)
		printf("Rtec bedzie wrzec.\n");
	if (t >= pwt)
		printf("Tlen bedzie wrzec.\n");
	if (t >= pww)
		printf("Woda bedzie wrzec.\n");
}
int wczytaj_zadanie(int i)
{
	switch (i)
	{
	case 1:
		zadanie1();
		break;

	case 2:
		zadanie1a();
		break;

	case 3:
		zadanie1b();
		break;

	case 4:
		zadanie2();
		break;

	case 5:
		zadanie3();
		break;

	case 6:
		zadanie4();
		break;

	case 7:
		zadanie5();
		break;

	case 9:
		zadanie6();
		break;

	case 10:
		zadanie7();
		break;

	case 11:
		zadanie7a();
		break;

	case 12:
		zadanie7b();
		break;

	case 13:
		zadanie8();
		break;

	case 14:
		zadanie9();
		break;

	case 15:
		zadanie10();
		break;

	case 16:
		zadanie10a();
		break;

	case 17:
		zadanie11();
		break;

	case 18:
		zadanie12();
		break;

	case 19:
		zadanied1();
		break;

	case 20:
		zadanied2();
		break;

	case 21:
		zadanied3();
		break;

	case 22:
		zadanied4();
		break;

	case 23:
		zadanied5();
		break;

	case 24:
		zadanied6();
		break;

	case 25:
		zadanied7();
		break;

	case 26:
		zadanied8();
		break;
	}
}

int main()
{
	int zadanie;
	printf("Lista 1:\nzadanie 1 -> 1       zadanie 1a -> 2      zadanie 1b -> 3      zadanie 2 -> 4\nzadanie 3 -> 5       zadanie 4 -> 6       zadanie 5 -> 7       zadanie 6 -> 9\nzadanie 7 -> 10      zadanie 7a -> 11     zadanie 7b -> 12     zadanie 8 -> 13\nzadanie 9 -> 14      zadanie 10 -> 15     zadanie 10a -> 16     zadanie 11 -> 17\nzadanie 12 -> 18\n");
	printf("Zadania dodatkowe:\nzadanie dodatkowe 1 -> 19                 zadanie dodatkowe 2 -> 20\nzadanie dodatkowe 3 -> 21                 zadanie dodatkowe 4 -> 22\nzadanie dodatkowe 5 -> 23                 zadanie dodatkowe 6 -> 24\nzadanie dodatkowe 7 -> 25                 zadanie dodatkowe 8 -> 26\n");
	printf("\nPodaj numer zadania: ");
	scanf_s("%d", &zadanie);

	wczytaj_zadanie(zadanie);

	return 0;
}
