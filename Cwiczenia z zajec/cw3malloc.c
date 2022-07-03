#include <stdlib.h>


double avrg(double tab[], int t)
{
	double sum = 0;
	double average = 0;

	for (int i = 0; i < t; i++)
		sum += tab[i];

	average = sum / t;

	return average;
}
void main()
{
	int *t;
	int n = 0;

	printf("Podaj ilosc pomiarow: ");
	scanf_s("%d", &n);

	t = malloc(n * sizeof(t));

	for (int i = 0; i < n; i++)
	{
		printf("Podaj wartosc pomiaru: ");
		scanf_s("%lf", &t[i]);
	}

	printf("%lf", avrg(t[n], n));
}
