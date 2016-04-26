#include <stdio.h>

int main(){
long c[100];
long l,h, i, j,k,f,u;
printf("High: "); scanf ("%d", &h);
l=h;
while (k<h)
{
	for (u=1;u<=l;u++)
      printf("    ");
    l--;
    for (i = 1; i <= k; i++)
      c[i] = 0;
    c[0] = 1;
    for (j = 1; j <= k; j++)
      for (i = j; i >= 1; i--)
        c[i] = c[i - 1] + c[i];
    for (i = 0; i <= k; i++)
    printf ("%-7ld ", c[i]);
	printf("\n");	
	++k;
}
return 0;
}