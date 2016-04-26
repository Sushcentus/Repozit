#include <stdio.h>

int main()
{
	int i=33;
for (i;i<128;i++)
if ( !(i>47 && i<58) && !(i>64 && i<91) && i!=95 && !(i>96 && i<123))
printf ("%c ",i);
printf("\n");
return 0;
}