#include <stdio.h>
#include <string.h>
int main()
{
char s[256];
printf("string:");
gets(s);
printf("Size: %d\n", strlen(s)+1);
return 0;
}