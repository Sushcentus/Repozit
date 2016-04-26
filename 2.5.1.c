#include <stdio.h>
char *CPY (char *s1, char *s2)
{
char *s=s1;
while (*s1++=*s2++);
return (s);
}
int main()
{
char s1[256], s2[256]="\0";
gets (s1);
puts(CPY(s2,s1));
return 0;
}