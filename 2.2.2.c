#include <stdio.h>

int main()
{
unsigned char a=0;
printf("\tNumber\tSymbol\n");
do
{
printf("\t%d\t%c\n", a+1, a);
a++;
} while (a<128);
	return 0;
}