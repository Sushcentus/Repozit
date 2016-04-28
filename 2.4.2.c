#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <limits.h>
int main()
{
long long a,b,S;
char d;
scanf("%d%c%d",&a,&d,&b);
assert(a>=LLONG_MIN);
assert(b>=LLONG_MIN);
assert(a<=LLONG_MAX);
assert(b<=LLONG_MAX);
switch (d){
case '+':  S=a+b; break;
case '-':  S=a-b; break;
case '*':  S=a*b; break;
case '/':  assert(b!=0); S=a/b; break;
case '%':  assert(b!=0); S=a%b; break;
case '^':  S=pow(a,b); break;
default: printf("ERROR");
}
printf("=%ld\n",S);
return 0;
}