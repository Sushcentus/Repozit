#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int  n = 1, *m, t = 0;	
char s[256],way[16], *one, **all;
FILE *start, *end;
printf("Name of first file:\n");
scanf("%s",way);
start = fopen(way, "w");
end = fopen("Results.txt", "r");
if (start == 0)
{
printf("ERROR!\n NO FILE!");
return 1;
}
fscanf(start,"%s",s);
all = (char**)malloc(sizeof(char*));
*all = (char*)malloc(strlen(s) + 1);
strcpy(*all,s);
m[0] = 1;
while (fscanf(start,"%s",s)){	
for(int i = 0; i < n; ++i){
if(strcmp(*(all+i),s) == 0)
{
m[i]++;
t = 1;
}
}
if(!t)
{
n++;
all = (char**)realloc(all, n * sizeof(char*));
*(all+n-1) = (char*)malloc(strlen(s) + 1);
strcpy(all[n-1], string);
m = (int*)realloc(m, sizeof(int) * n);
m[n-1] = 1;
}
t = 0;
}
for (int j=0; j<=n-1;j++){
for (int i=0;i<n-j-1;i++){
while (m[i] > m[i+1]){
one = *(all+i); 
int a = m[i];
m[i]=m[i+1];
*(all+i)=*(all+i+1);
*(all+i+1)=one;
m[i+1] = a;}
}
fprintf(end,"%s -%d\n",all[i], m[i]);
}
fclose(start);
fclose(end);
return 0;
}
