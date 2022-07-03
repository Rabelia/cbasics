#include <stdio.h>

int strong_number(int n);
int main()
{
	int n = 5;

	printf("%d", strong_number(n));

	return 0;
}
int strong_number(int n)
{
	if (n == 0 || n == 1)
        return 1;
    else
        return n*strong_number(n-1);
}
