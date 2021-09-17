#include <stdio.h>
#include <graphics.h>
#include <math.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
//#define ROUND(x) (int)(x+0.5)
main()
{
     int gd = DETECT,gm = DETECT;
     float x1,y1,x2,y2,x,y;
     printf("\nEnter two end points of a line: ");
     printf("\nEnter x1,y1::");
     scanf("%f %f",&x1,&y1);
     printf("\nEnter x2,y2:: ");
     scanf("%f %f",&x2,&y2);
     initgraph(&gd,&gm,"");
     x=x1;
     y=y1;
     putpixel(round(x),round(y),WHITE);
     int dx=x2-x1;
     int dy=y2-y1;
     int steps;
     if(abs(dx)>abs(dy))
        steps=dx;
     else
        steps=dy;
     float xinc=(float)dx/steps;
     float yinc=(float)dy/steps;
     for(int k=1;k<=steps;k++)
     {
         x=x+xinc;
         y=y+yinc;


     putpixel(round(x),round(y),WHITE);
     }
     getch();


}








