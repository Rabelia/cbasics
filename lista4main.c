#include <stdio.h>

double srh(double a, double b)
{
	return 1/(((1/a)+(1/b))/2);
}
void zadanie1()
{
	double a, b;
	printf("Podaj dwie liczby w formacie a, b: ");
	scanf_s("%lf, %lf", &a, &b);

	printf("%lf", srh(a, b));
}
double max(double x, double y)
{
	if (x >= y)
		return x;
	else
		return y;
}
void zadanie2()
{
	double x, y;
	printf("Podaj dwie liczby w formacie x, y: ");
	scanf_s("%lf, %lf", &x, &y);

	printf("%lf jest wieksza.", max(x, y));
}
int fac(int i)
{
	int j = 1;
	for (int k = i; k > 0; k--)
		j = j * k;
	return j;
}
void zadanie3a()
{
	int i = fac(4) + fac(6) - fac(2);
	printf("%d", (i));
}
void zadanie3b()
{
	int n = 5;
	int k = 2;
	int i = fac(n) / (fac(k) * fac(n - k));
	printf("%d", i);
}
double power(int i, double x)
{
	double y = x;
	for (int k = 1; k < i; k++)
		y = y * x;
	
	return y;
}
zadanie4()
{
	double x = power(2, 3.1) + power(3, 5.5) + 24;
	printf("%lf", x);
}
int binary(unsigned int i)
{
	int j;
	int l = 0;
	for (int k = i; k > 0; k--)
	{
		j = i % 2;
		i = i / 2;
		if (j == 1)
			l++;
	}
	return l;
}
zadanie5()
{
	unsigned int i;
	printf("Podaj liczbe naturalna: ");
	scanf_s("%d", &i);
	printf("Liczba jedynek w zapisie tej liczby w reprezentacji binarnej to: %d", binary(i));
}
void printsigns(char a, int r, int n)
{
	for (int i = r; i > 0; i--)
	{
		for (int j = n; j > 0; j--)
			printf("%c", a);
		printf("\n");
	}
}
void zadanie6()
{
	char a;
	int n, r;
	
	printf("Podaj znak: ");
	scanf_s("%c", &a);
	printf("Podaj liczbe znakow i liczbe rzedow w formacie lz, lr: ");
	scanf_s("%d, %d", &n, &r);

	printsigns(a, r, n);
}
int get_number(int a, int b)
{
	int c;
	printf("Podaj liczbe z zakresu %d - %d: ", a, b);
	scanf_s("%d", &c);

	if (c >= a && c <= b)
		return c;
	else
		get_number(a, b);
}
void zadanie7()
{
	int a, b;
	printf("Podaj dwie liczby naturalne: ");
	scanf_s("%d, %d", &a, &b);

	get_number(a, b);
}
void main()
{
	zadanie7();

	return 0;	
}