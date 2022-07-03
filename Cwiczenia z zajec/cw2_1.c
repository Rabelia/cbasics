#include <stdio.h>
#include <time.h>
#define R 10




void main()
{
    int arr[R][R];

    srand(time(NULL));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < R; j++)
        {
            arr[i][j] = rand() % 1000;
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
    
    int x, y;

    printf("Podaj numer pierwszej linii: \n");
    scanf_s("%d", &x);

    printf("Podaj numer drugiej linii: \n");
    scanf_s("%d", &y);
 
    x--;
    y--;

    for (int i = 0; i < R; ++i)
    {
        int temp;
        temp = arr[y][i];
        arr[y][i] = arr[x][i];
        arr[x][i] = temp;
    }
    
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < R; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}