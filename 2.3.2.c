#include <stdio.h>

int main()
{
char s[256];
char a[256]="\0";
int i=0, j=0;
printf("string:");
gets(s);
a[j]=s[i];
while(s[i]) 
	{
		if (s[i]==s[i+1]) i++; else {a[j]=s[i]; j++; i++;}
	}
puts(a);
return 0;
}