#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp (const void *a, const void *b) {return (*(int*)a-*(int*)b);}

void sort (char *s)
{
char *t=s;
int i,j, a[256]={0};
qsort(s,strlen(s),sizeof(char),comp);
puts(s);
for (i=0;i<strlen(s);i++)
for (j=0;j<256;j++)
if (*(s+j)==*(t+i) && *(s+j+1)!=*(s+j)) a[j]=a[j]+1;
for (i=1;i<=strlen(s);i++)
for (j=0;j<256;j++)
if (a[j]!=0 && a[j]==i) 
printf ("%c",*(s+j));
printf("\n");
}

int main()
{
char s[256];
gets (s);
sort (s);
return 0;
}
