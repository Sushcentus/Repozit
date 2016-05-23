#include <stdio.h>
#include "2.5.5.1.c"

int main()
{
int n,i,j;
printf("Number of unknown:"); scanf("%d",&n);
assert(n>0);
float m[n][n],d,b[n];
for (i=0;i<n;i++)
for (j=0;j<n;j++)
{printf("a%d%d=",i+1,j+1); scanf("%f",&m[i][j]);}
for (i=0;i<n;i++) 
{ printf("b%d=",i+1); scanf("%f",&b[i]);}
printf("\n%f\n",Det(n,m));
if (n==1) printf("\nx=%f\n",b[0]/m[0][0]);
else
for (i=0;i<n;i++) 
{
d=Det(n,m);
assert(d!=0);
printf("\nx%d=%f",i+1,kram(n,m,b,i)/d);
}
printf("\nFunctions are called %d times\n",q);
return 0;
}