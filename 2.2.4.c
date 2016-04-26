#include <stdio.h>

int main()
{
char s[256];
int i=-1;
printf("string:");
gets(s);
while (s[++i]) if (s[i]>96 && s[i]<123) s[i]=s[i]-32;
puts(s);
return 0;
}