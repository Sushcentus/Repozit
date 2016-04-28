#include <stdio.h>


#define max(a,b) (if(a>b) a; else b)



void Mcouple(int n)

{

unsigned long long x,y,i=0,a=1543, b=3481, m=139974;
x=b/(a%n);
y=a/(b%n);
while (i<=n) 

{x=((a*x+b)%m);

y=((a*y+b)%m);

el=ch2;

printf("MAX(%d,%d)=%d\n ",x,y,max(x,y));

i++;

}
}



int main()

{
int n;

printf("Number of couples:\n"); scanf("%d",&n);

Mcouple(n);

return 0;
}



unsigned long long x,a=1543, b=3481, m=139974;
int l;
scanf("%d\n",%x);
scanf("%d\n",%l);
for (int i=0;i<l;i++)
printf("%d\n:,x=(a*x+c)%m;