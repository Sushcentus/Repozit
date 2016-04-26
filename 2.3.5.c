#include <stdio.h>
#include <math.h>
int main()
{
int ax,ay,bx,by,cx,cy;
printf("first point:"); scanf("%d %d",&ax,&ay);
printf("second point:"); scanf("%d %d",&bx,&by);
printf("third point:"); scanf("%d %d",&cx,&cy);
if ( ((pow(ax-bx,2)+pow(ay-by,2))+(pow(ax-cx,2)+pow(ay-cy,2))==(pow(bx-cx,2)+pow(by-cy,2))) || \
((pow(cx-bx,2)+pow(cy-by,2))+(pow(ax-cx,2)+pow(ay-cy,2))==(pow(ax-bx,2)+pow(ay-by,2))) || \
((pow(ax-bx,2)+pow(ay-by,2))+(pow(bx-cx,2)+pow(by-cy,2))==(pow(ax-cx,2)+pow(ay-cy,2))) )
printf("rectangular\n");
else printf("No\n");
return 0;
}