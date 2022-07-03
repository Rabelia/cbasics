#include <stdio.h>
#include <time.h>
#define R 10



int printwhat()
{
	printf("1 - linia horyzontalna\n2 - linia werdykalna\n3 - przekatna\n");
	printf("Co mam wyswietlic? Podaj liczbe: ");

	int i;

	scanf_s("%d", &i);

	return i;
}
void printhline(int arr[][R], int r)
{
    for (int i = 0; i < R; i++)
    {
        printf("%4d", arr[r][i]);
    }
}
void printvline(int arr[][R], int r)
{
    for (int i = 0; i < R; i++)
    {
        printf("%4d", arr[i][r]);
    }
}
void printpf(int arr[][R])
{
    for (int i = 0; i < R; i++)
    {
        printf("%4d\n", arr[i][i]);
    }
}
void printpb(int arr[][R])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = R - 1; j >= 0; j--)
        {
            printf("%4d\n", arr[i][j]);
        }
    }
}





void main()
{
    int arr[R][R];

    srand(time(NULL));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < R; j++)
        {
            arr[i][j] = rand()% 1000;
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < R; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }


    int pr = printwhat();

    switch (pr)
    {
    case 1:
        int a;

        printf("Podaj numer lini: ");

        scanf_s("%d", &a);

        printhline(arr, a);
        
        break;

    case 2:
        int b;

        printf("Podaj numer kolumny: ");
        
        scanf_s("%d", &b);
        printvline(arr, b);
       
        break;

    case 3:
        int c;

        printf("Od prawej - 1\nOd lewej - 2\nPodaj cyfrę: ");

        scanf_s("%d", &c);

        if (c == 1)
            printpf(arr);
        else if (c == 2)
            printpb(arr);

        break;
    }
}