#include <stdio.h>
#include <string.h>
int main()
{
char s[256];
char a;
int i=0;
printf("string:");
gets(s);
a=s[i];
while (s[i++]) if (s[i]>a) a=s[i];
printf("%c\n",a);
return 0;
}