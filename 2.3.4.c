#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, x1, x2;
printf("a="); scanf("%f",&a);
printf("b="); scanf("%f",&b);
printf("c="); scanf("%f",&c);
float D=b*b-(4.0*a*c);
if (D!=0)
if (D>0) {
x1=(-b+sqrt(D))/2.0*a;
x2=(-b-sqrt(D))/2.0*a;
printf("x1=%f\nx2=%f\n",x1,x2);}
else printf("No rational roots\n");
else printf("x=%f\n",x1=-b/2.0*a);
return 0;
}