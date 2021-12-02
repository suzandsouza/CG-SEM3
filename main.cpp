#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    int x[4],y[4],i;
    double put_x,put_y,t;
    int gd=DETECT,gm=DETECT;
    printf("\n-------Bezier Curve Program--------");

    printf("\n Please enter x and y cooridinates\n\n ");
{

    for(i=0;i<4;i++)
    {
        printf("x%dy%d:: ",i+1,i+1);
        scanf("%d%d",&x[i],&y[i]);

    }
    initgraph(&gd,&gm,"");
    for(i=0;i<4;i++)
    {

        putpixel(x[i],y[i],3);

    }


    for(t=0.0;t<=1.0;t=t+0.001) //as value t lies between 0 and 1
    {

        put_x=pow(1-t,3)*x[0]+3*t*pow(1-t,2)*x[1]+3*t*t*(1-t)*x[2]+pow(t,3)* x[3];
        //Formula to draw the curve
        put_y=pow(1-t,3)*y[0]+3*t*pow(1-t,2)*y[1]+3*t*t*(1-t)*y[2] + pow(t,3)* y[3];
        putpixel(put_x,put_y, WHITE);


    }

}
    getch();
    closegraph();


}
