#include <stdio.h>
#include <math.h>
#include <assert.h>

float Det (int n, float m[n][n])
{

float D=0, T[n-1][n-1];
int i;
if (n==2) D=m[0][0]*m[1][1]-m[1][0]*m[0][1]; else
for (i=0;i<n;i++)
{
int h=0,j=0,c=0;
for (j;j<n;j++){
if (j==i) h=1;
T[c][j]=m[c+1][j+h];
c++;
}
D+=pow(-1.,i)*m[0][i]*Det(n-1,T);
}
return D;
}

float kram(int n, float M[n][n], float B[n], int a)
{

float T[n][n];
for (int i=0;i<n;i++)
for (int j=0;j<n;j++)
{
if (j==a) T[i][j]=B[i];
else T[i][j]=M[i][j];
}
return Det(n,T);
}