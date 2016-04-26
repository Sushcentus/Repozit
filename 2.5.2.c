#include <stdio.h>
char *CPY (char *s1, char *s2)
{
char *s=s1;
while (*s1++=*s2++);
return (s);
}

char *invert (char *s)
{
char t[256];
int i=0, n=0;
while (*(s+i))
for (i;i>=0;i--)
{t[n]=*(s+i); n++;}
return(t);
}

int main()
{
char s1[256], s2[256]="\0";
gets (s1);
printf("Invert? y/n");
if (scanf("%c")=='n') puts(CPY(s2,s1));
if (scanf("%c")=='y') puts(invert(CPY(s2,s1)));
	else printf("Wrong letter");
return 0;
}