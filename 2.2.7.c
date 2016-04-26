#include <stdio.h>

int main()
{
unsigned long long x,a=1543, b=3481, m=139974;
int l;
printf ("Write point number:"); scanf("%d",&x);
printf ("How long:"); scanf("%d",&l);
for (int i=0;i<l;i++)
printf("%d\n",x=(a*x+b)%m);
return 0;
}