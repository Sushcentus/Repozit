#include <stdio.h>

int main()
{
float t, v, alpha, SIN;
printf("Start speen:"); scanf("%f",&v);
printf("Ancle:"); scanf("%f",&alpha);
alpha*=3.141593/180.;
SIN = alpha-alpha*alpha*alpha/6.0+alpha*alpha*alpha*alpha*alpha/120.0-alpha*alpha*alpha*alpha*alpha*alpha*alpha/5040.0+alpha*alpha*alpha*alpha*alpha*alpha*alpha*alpha*alpha/362880.0;
printf("t=%f\n", t=2.0*v*SIN/9.81);
return 0;
}