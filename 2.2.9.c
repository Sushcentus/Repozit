#include <stdio.h>
int main()
{
unsigned long long a,l=0,sum=0,d;
char str[10];
printf("a="); scanf("%d",&a);
while ( a != 0 ){
	l++;
  d = a%10;
  sum = sum + d;
  a= a/10;}
  if (l==0) l=1;
printf("Numbers:%d\n",l);
printf("Summ:%d\n",sum);
printf("Mid:%f\n",((float)sum/((float)l)));
return 0;
}