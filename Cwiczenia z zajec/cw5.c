#include <stdio.h>

char myfunction(char* tab1, char* tab2)
{
	char* temp = tab1;

	while (*tab1 != '\0')
		tab1++;
	while (*tab2 != '\0')
	{
		*tab1 = *tab2;
		tab2++;
		tab1++;
	}

	*tab1 = '\0';
	return temp;
}
void main()
{
	char taba[10] = "Ala ma ";
	char tabb[5] = "kota";

	myfunction(taba, tabb);


	printf("%s", taba);
}
