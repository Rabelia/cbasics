#include <stdio.h>
#include <stdlib.h>
#define A 10


void zadanie1()
{
	int arr[A] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1 };

	for (int i = 0; i < A; i++)
		printf("%d\n", arr[i]);
}
void zadanie2()
{
	double arr[8];

	for (int i = 0; i < 8; i++)
		scanf_s("%lf", &arr[i]);

	for (int i = 8 - 1; i >= 0; i--)
		printf("%lf, ", arr[i]);
}
void complete_array(double arr[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("Wprowadz liczbe: ");
		scanf_s("%lf", &arr[i]);
	}
}
void print_array(double arr[])
{
	for (int i = 0; i < 10; i++)
		printf("%lf, ", arr[i]);
}
void zadanie3()
{
	double arr[10];
	complete_array(arr);
	print_array(arr);
}
int ifdevidedk(int arr[], int k)
{
	int n = 0;
	for (int i = 0; i < A; i++)
		if (arr[i] % k == 0)
			n++;
	return n;
}
void zadanie4()
{
	int arr[A] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k;
	printf("Podaj dzielnik: ");
	scanf_s("%d", &k);

	printf("%d", ifdevidedk(arr, k));
}
void min_max_swap(int arr[])
{
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < A; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	
	for (int i = A-1; i >= 0; i--)
	{
		if (arr[i] == max)
			arr[i] = min;
		else if (arr[i] == min)
			arr[i] = max;
	}
}
void zadanie5()
{
	int arr[A] = { 1,2,3,4,5,6,7,8,9,10 };
	min_max_swap(arr);
	for (int i = 0; i < 10; i++)
		printf("%d, ", arr[i]);
}
void kindofnumb(int arr[])
{
	int minus = 0;
	int plus = 0;
	int zeros = 0;

	for (int i = 0; i < A; i++)
	{
		if (arr[i] == 0)
			zeros++;
		else if (arr[i] > 0)
			plus++;
		else if (arr[i] < 0)
			minus++;
	}
	printf("Liczby na minusie: %d\n", minus);
	printf("Liczba zer: %d\n", zeros);
	printf("Liczby na plusie: %d.", plus);
}
void zadanie6()
{
	int arr[A] = { -1, -2, -3, 0, 0, 1, 2, 3, 0, 1 };

	kindofnumb(arr);
}
void movetoleft(int arr[])
{
	int swap = arr[0];
	for (int j = 0; j < A ; j++)
	{
		if (j == A - 1)
			arr[j] = swap;

		else
			arr[j] = arr[j + 1];
	}
}
void zadanie7()
{
	int arr[A] = { 1,2,3,4,5,6,7,8,9,10 };
	movetoleft(arr);
	for (int i = 0; i < 10; i++)
		printf("%d, ", arr[i]);
}
void reversearr()
{

}
void completearr(int arr[])
{
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 2001 - 1000;
	}
}
int bubblesort(int Arr[], int i)
{ 
	int swap;
	for (int k = 0; k < i; k++)
	{
		for (int j = 0; j < i - 1; j++)
			if (Arr[j] > Arr[j + 1])
			{
				swap = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = swap;
			}

	}
}

void zadanie11()
{
	int Arr[100];

	completearr(Arr);
	for (int i = 0; i < 100; i++)
		printf("%d, ", Arr[i]);
	printf("\n");

	bubblesort(Arr, 100);
	for (int i = 0; i < 100; i++)
		printf("%d, ", Arr[i]);

}

void main()
{
	zadanie7();
}