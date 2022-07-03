#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void zadanie1()
{
	int i;
	 
	printf("Podaj liczbe calkowita: ");
	scanf_s("%d", &i);

	int k = 1;

	while (k <= 11)
	{
		printf("%d\n", (i + k));
		k++;
	}
}
void zadanie2()
{
	int lp, lk, lo;
	printf("Podaj liczbe poczatkowa: ");
	scanf_s("%d", &lp);
	printf("Podaj liczbe koncowa: ");
	scanf_s("%d", &lk);
	printf("Podaj liczbe odstepu: ");
	scanf_s("%d", &lo);

	while (lp <= lk)
	{
		printf("%d\n", lp);
		lp = lp + lo;
	}
}
void zadanie3()
{
	unsigned long long x;
	printf("Podaj liczbe calkowita: ");
	scanf_s("%lld", &x);

	int k = 0;

	do
	{
		x = x / 10;
		k++;
	} while (x > 0);

	printf("%d\n", k);
}
void zadanie4()
{
	unsigned long long x;
	printf("Podaj liczbe naturalna: ");
	scanf_s("%lld", &x);
	int i = 0;

	while (x > 0)
	{
		i += x % 10;
		x = x / 10;
	}
	printf("%d", i);
}
void zadanie5a()
{
	int i;

	printf("Podaj liczbe naturalna wieksza od 1: ");
	scanf_s("%d", &i);
	int k = 1;

	while (k <= i)
	{
		printf("%d\n", k);
		k++;
	}
}
void zadanie5b()
{
	int i;

	printf("Podaj liczbe naturalna wieksza od 1: ");
	scanf_s("%d", &i);
	int k = 1;

	while (k <= i)
	{
		printf("%d\n", i);
		i--;
	}
}
void zadanie5c()
{
	int i;

	printf("Podaj liczbe naturalna wieksza od 1: ");
	scanf_s("%d", &i);
	
	if (i % 2 != 0) {
		i -= 1;
	}
	else {
		i -= 2;
	}
	
	while (i > 0)
	{
		printf("%d\n", i);
		i -= 2;
	}
}
void zadanie5d()
{
	int i;

	printf("Podaj liczbe naturalna wieksza od 1: ");
	scanf_s("%d", &i);

	if (i % 2 != 1) {
		i -= 1;
	}

	while (i > 0)
	{
		printf("%d\n", i);
		i -= 2;
	}
}
void zadanie5e()
{
	int i;

	printf("Podaj liczbe naturalna wieksza od 1: ");
	scanf_s("%d", &i);
	int k = 1;

	while (i > 0)
	{
		printf("%d\n", k);
		k = k + 3;
		i--;
	}
}
void zadanie5f()
{
	int i = 1;
	int k = 1;
	while (i <= 12)
	{
		k = i * k;
		printf("%d\n", k);
		i++;
	}
}
void zadanie5g()
{
	int i;

	printf("Podaj liczbe naturalna wieksza od 1: ");
	scanf_s("%d", &i);
	int k = 1;
	
	while (k < i)
	{
		double x = 1.0 / k;
		printf("%lf\n", x);
		k++;
	}
}
void zadanie5h()
{
	int i = 1;
	double k = 3;
	while (i <= 17)
	{ 			
		printf("%lf\n", k);
		k = (6 * k - 6.5);
		i++;
	}
}
void zadanie5i()
{
	int i = 0;
	long long int k = 0;

	while (i < 33)
	{
		printf("%lld\n", k);
		k = 2 * k + 1;
		i++;
	}

}
void zadanie5j()
{
	int i = 0;
	int k;
	printf("Podaj liczbe naturalna wieksza od 1: ");
	scanf_s("%d", &k);

	while (k)
	{
		i = i + k;
		k--;
	}
	printf("%d\n", i);
}
void zadanie5k()
{
	int i = 1;
	int k;
	printf("Podaj liczbe naturalna wieksza od 1: ");
	scanf_s("%d", &k);

	int l = 1;

	while (i < k + 1)
	{
		printf("%d\n", l);
		i++;
		l = l + i * i;
	}
}
void zadanie6()
{
	int i = 1;
	int max = 0;

	while (i <= 0)
	{
		printf("Podaj liczbe: ");
		scanf_s("%d", &i);
		if (i > max)
			max = i;
		
	}
	printf("%d\n", max);
}
void zadanie7()
{
	int n, m;
	int r;
	int n1, m1;

	printf("Podaj dwie liczby calkowite w formacie liczba,liczba: ");
	scanf_s("%d,%d", &n, &m);

	n1 = n;
	m1 = m;

	if (n == 0)
		printf("NWD (%d, %d) = %d.", n1, m1, m);
	else
	{
		while (n != 0)
		{
			r = m % n;
			m = n;
			n = r;
		}
		printf("NWD (%d, %d) = %d.", n1, m1, m);
	}
}
void zadanie8()
{
	int y = 1;
	int a = 1000;
	int f = 1000;

	float pa = 0.1;
	float pf = 0.06;

	do
	{
		a = 1000 + (1000 * pa * y);
		f = f + f * pf;
		printf("%d\n", y);
		y++;
		

	} while (a > f);
}
void zadanie9()
{
	int i;

	printf("Podaj liczbe calkowita wieksza niz 2: ");
	scanf_s("%d", &i);
	
	for (int j = 2; j <= i; j++)
	{
		bool pierwsza = true;

		for (int k = 2; k*k <= j; k++)
			if (j % k == 0 && j != 2)
				pierwsza = false;

		if (pierwsza == true)
			printf("%d\n", j);
	}
}
void zadanie10()
{
	int target, min, max;
	target = 50;
	char anwser;
	min = 1; 
	max = 100;

	do {
		printf("Czy jest to %d? \n t-tak, d-duza, m-mala: ", target);
		scanf_s(" %c", &anwser);
		if (anwser == 't')
		{
			printf("Zgadles!");
		}
		else if (anwser == 'm')
		{
			min = target;
			target = (min + max)/2;
		}
		else if (anwser == 'd')
		{
			max = target;
			target = (min + max)/2;
		}
		else
		{
			printf("Bledna odpowiedz.");
		}

	} while (anwser != 't');
}
void zadanie11c()
{
	int i;
	printf("Podaj liczbe naturalna nieparzysta: ");
	scanf_s("%d", &i);
	int space = i - 1;
	int star = 1;
	
	for (int j = 1; j <= i; j++)
	{
		for (int k = 0; k < space; k++)
			printf(" ");
		space--;
		for (int k = 0; k < star; k++)
			printf("*");
		star += 2;
		printf("\n");
	}
	
}


void main()
{
	zadanie10();
	
	return 0;
}