#include <stdio.h>

int main()
{
int a;
printf("a="); scanf("%d",&a);
for (int i=a-1;i>0;i--)
a*=i;
printf("factorial=%d\n",a);
return 0;
}