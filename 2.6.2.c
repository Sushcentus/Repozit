#include <stdio.h>
#include <stdlib.h>

int main (){
FILE *start, *end;
unsigned char c,a,i=167;
char one[16],two[16];
printf("Input file:\n"); scanf("%s",one);
printf("Output file:\n"); scanf("%s",two);
start=fopen(one,"rb");
end=fopen(two, "wb");
do{
if (fread(&c,1,1,start)) {
j=c^i;
fwrite(&a,1,1,end);}
}while (feof(start)==0);
fclose(start);
fclose(end);
return 0;
}