#include <stdio.h>

unsigned long long FIBONACI(unsigned long a)
{
if (a==0) return 0;
else if (a==1) 
return 1;
else return (FIBONACI(a-1)+FIBONACI(a-2));
}

int main()
{
unsigned long n,i;
printf("Numbers:\n"); scanf("%lu",&n);
for (i=0;i<n;i++) printf("%lu ",FIBONACI(i));
printf("\n");
return 0;	
}