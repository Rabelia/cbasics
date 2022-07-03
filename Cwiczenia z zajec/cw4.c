#include <stdio.h>
#include <stdlib.h>


void myfunction(char tab1[], char tab2[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%c", tab1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%c", tab2[i]);
    }
}
int main()
{
    char taba[10] = "Ala ma ";

    char tabb[5] = "kota";

    myfunction(taba, tabb);

    return 0;