//Implementation of Bresenham line drawing algorithm
#include <stdlib.h>
#include<math.h>
void lineBres(int x0,int y0,int xEnd,int yEnd)
{
    int dx=fabs(xEnd-x0), dy=fabs(yEnd-y0);
    int p=2*dy-dx;
    int twoDy=2*dy, twoDyMinusdx=2*(dy-dx);
    int x,y;
    if(x0>xEnd)
    {
        x=xEnd;
        y=yEnd;
        xEnd=x0;
    }
    else{
        x=x0;
        y=y0;
    }
    putPixel(x,y);
    while(x<xEnd)
    {
        x++;
        if(p<0)
            p+=twoDy;
        else
        {
            y++;
            p=+twoDyMinusdx;
        }
        putPixel(x,y);
    }
}


int main()
{
    int gd=DETECT,gm=DETECT;
    int x0,y0,xEnd,yEnd;

    printf("Enter the coordiantes x1,y1");
    scanf("%d%d",&x0,&y0);

    printf("Enter the coordiantes x2,y2");
    scanf("%d%d",&xEnd,&yEnd);

    initgraph(&gd,&gm," ");
    lineBres(x0,y0,xEnd,yEnd);
    return 0;

}
