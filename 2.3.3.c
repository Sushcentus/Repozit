#include <stdio.h>
#include <stdio.h>

int main(void)
{
int a,b;
do{
printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
} while (a==0 || b==0);
while (a && b){
if (a>b)
a=a%b;
else
b=b%a;
}

printf("NOD(a,b)=%d\n",a+b);
return 0;
}