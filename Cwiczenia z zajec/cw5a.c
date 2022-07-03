#include <stdio.h>

char myfunction(char* tab1, char* tab2)
{
	char* temp = tab2;

	while (*tab1 != '\0')
		tab1++;
	while (*tab2 != '\0')
        tab2++;

    while (tab2 != temp)
    {
        if (*tab2 == *tab1)
        {
            tab1--;
            tab2--;
        }
        else
            return 0;

    }
	return 1;
}
void main()
{
	char taba[] = "Ala ma kota";
	char tabb[] = "kota";

	printf("%d", myfunction(taba, tabb));
}
