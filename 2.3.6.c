#include <stdio.h>

int main()
{
int procent, pr;
char s[23]="{____________________}";
do {printf("procent="); scanf("%d",&procent);}
while (procent>100 || procent<0);
pr=procent/5;
for (int i=1;i<=20;i++)
if (i<=pr) 
s[i]='|';
printf("Progress:\n%s",s);
return 0;
}