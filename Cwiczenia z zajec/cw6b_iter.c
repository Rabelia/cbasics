#include <stdio.h>
#include<time.h>

long int fibonacc(int n);

int main()
{

    int n = 0;
    for (n; n<150; n++)
    {
        clock_t start = clock();


        fibonacc(n);


        clock_t stop = clock();
        double time_spend=(double)(stop-start)/CLOCKS_PER_SEC;


        printf("%d. wyraz ciagu to: %ld      ", n, fibonacc(n));

        printf("\nTime: %lf\n\n", time_spend);

    }
    return 0;
}
long int fibonacc(int n)
{
    int i, arr[n];
    arr[0]=0;
    arr[1]=1;

    for (i=2;i<n;i++)
        arr[i]=arr[i-1]+arr[i-2];

    return arr[n-1];
}
