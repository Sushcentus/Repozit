#include <stdio.h>
#include <math.h>

int main(void)
{
float a,b,c,d,R1,R2;
char z1,z2,i;
printf("First resist:\n"); scanf("%f%c%f%c",&a,&z1,&b,&i);
if (z1=='-') b=-b;
printf("Second resist:\n"); scanf("%f%c%f%c",&c,&z2,&d,&i);
if (z2=='-') d=-d;				
R1=((a+c)*(a*c-b*d)+(b+d)*(a*d+c*b))/(pow((a+c),2)+pow((b+d),2));
R2=-((b+d)*(a*c-b*d)-(a+c)*(a*d+c*b))/(pow((a+c),2)+pow((b+d),2));
printf("Sum resist= %f+(%f)i\n",R1,R2);
return 0;
}