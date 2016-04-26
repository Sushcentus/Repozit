#include <stdio.h>
#include <math.h>
int main()
{
long long a,b,S;
char d;
scanf("%d%c%d",&a,&d,&b);
switch (d){
case '+':  S=a+b; break;
case '-':  S=a-b; break;
case '*':  S=a*b; break;
case '/':  if (b!=0) S=a/b; else printf("(infinite)");break;
case '%':  if (b!=0) S=a%b; else printf("(infinite)");break;
case '^':  S=pow(a,b); break;
default: printf("ERROR");
}
printf("=%ld\n",S);
return 0;
}