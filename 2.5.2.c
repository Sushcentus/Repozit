#include <stdio.h>

char *CPY (char *s1, char *s2)
{
char *s=s1;
while (*s1++=*s2++);
return (s);
}

void invert (char *s)
{
if (*s) invert(s+1);
printf("%c",*s);
}

int main()
{
char a, s1[256], s2[256]="\0";
gets (s1);
printf("Invert? y/n\n"); scanf("%c",&a);
if (a=='n') puts(CPY(s2,s1));
else if (a=='y') invert(CPY(s2,s1));
	else printf("Wrong letter");
	printf("\n");
return 0;
}