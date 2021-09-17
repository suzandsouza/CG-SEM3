/*#include <graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    circle(120,120,140);
    getch();
    closegraph();
    return 0;

}

//
// A C program to make a rainbow. This program would only
// work in Turbo C compiler in DOS compatible machine
*/

//Driver code
/*#include <graphics.h>
int main()
{
    //gm is graphics mode which is a computer display
    //mode that generates an image using pixels.
    //DETECT is a macro defined in graphics.h header file
    int gd=DETECT, gm;

    //initgraph initializes the graphics system
    //by loading a graphics drivr from the disk
    initgraph(&gd,&gm,"");

    //line for x1,y1,x2,y2
    line(150,150,450,150);

    //line for x1,y1,x2,y2
    line(150,200,450,200);

    //line for x1,y1,x2,y2
    line(150,250,450,250);

    getch();

    //closegraph function closes the graphics
    //mode and dellocates all the memory that is allocated
    //by graphics system

    closegraph();

}*/

//the graphics.h contains ellipse() function which is
//described below:
//void ellipse(int x,int start_angle,intend_angle,
               //int x_radius,int y_radius)

//In it function x,y is location of the ellipse. x_radius and y_radius dec radius of form x and y
// start_angle is the starting point of angle and end_angle is the
//The value of the angle vary fron 0 to 360degree

/*#include <graphics.h>
int main()
{
    //gm is graphics mode which is a computer display
    //mode that generates image using pixels.
    //DETECT is a macro defined in graphics.h header file
    int gd=DETECT,gm;
    //location of ellipse
    int x=50, y=100;
    //here is the starting angle
    //end angle
    int start_angle=360;
    int end_angle=0;

    //radius from x axis and y-axis
    int x_rad=20;
    int y_rad=50;

    //initgraph initializes the graphics system
    //by loading a graphics driver from disk

    initgraph(&gd,&gm,"");

    //ellipse function
    ellipse(x,y,start_angle,end_angle,x_rad,y_rad);

    getch();

    //closegraph function closes the graphocs
    //mode and deallocates all memory allocated
    //by graphics system.

    closegraph();

    return 0;

}
*/
/*#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>

//Driver code
void main()
{
    clrscr();
    int gd=DETECT,gm,midx,midy;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    midx=getmaxx()/2;
    midy=getmaxy()/2;
    setcolor(CYAN);


    //Below just styling the text
    settextstyle(TRIPLEX_FONT,HORIZ_DIR,4)




}*/

/*
Name:- Suzan Dsouza
Roll No:- 9194
Batch:- B
Title:- Write the program to implement the Character generation using
the Bitmap mathod

Submission Date:-
*/

/*
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
//using namespace std;
int main()
{
    int i,j,k,x,y;
    int gd=DETECT,gm;//DETECT is macro defined in graphics.h
    /* ch1 ch2 ch3 ch4 are character arrays that display alphabets */
/*    int ch1[][15]={ {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1},

                    };
    int ch2[][10]={ {0,0,0,1,1,1,1,0,0,0},
                    {0,0,1,1,1,1,1,1,0,0},
                    {0,1,1,0,0,0,0,1,1,0},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,1,1,0,0,1,1},
                    {1,1,1,1,0,0,1,1,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1}
                    };
    int ch3[][10]={ {0,1,1,1,1,1,1,1,1,0},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,1,1,0},
                    {1,1,1,1,1,1,1,1,1,0},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1}
                    };
    int ch5[][10]={ {0,1,1,1,1,1,1,1,1,0},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,1,1,0},
                    {1,1,1,1,1,1,1,1,1,0},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1}
                    };
    int ch6[][10]={ {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1}
                    };
    int ch4[][10]={ {1,1,0,0,0,0,0,0,1,1},
                    {1,1,1,1,0,0,0,0,1,1},
                    {1,1,0,1,1,0,0,0,1,1},
                    {1,1,0,1,1,0,0,0,1,1},
                    {1,1,0,0,1,1,0,0,1,1},
                    {1,1,0,0,1,1,0,0,1,1},
                    {1,1,0,0,0,1,1,0,1,1},
                    {1,1,0,0,0,1,1,0,1,1},
                    {1,1,0,0,0,0,1,1,1,1},
                    {1,1,0,0,0,0,0,0,1,1}
                    };
    initgraph(&gd,&gm,"");//initialize graphic mode
    setbkcolor(BLUE);//set color of background to darkgray
    for(k=0;k<6;k++)
    {
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if(k==0)
                {
                    if(ch1[i][j]==1)
                    putpixel(j+100,i+230,YELLOW);
                }
                if(k==1)
                {
                    if(ch2[i][j]==1)
                    putpixel(j+150,i+230,YELLOW);
                }
                if(k==2)
                {
                    if(ch3[i][j]==1)
                    putpixel(j+200,i+230,YELLOW);
                }
                if(k==3)
                {
                    if(ch5[i][j]==1)
                    putpixel(j+250,i+230,YELLOW);
                }
                if(k==4)
                {
                    if(ch6[i][j]==1)
                    putpixel(j+300,i+230,YELLOW);
                }
                if(k==5)
                {
                    if(ch4[i][j]==1)
                    putpixel(j+350,i+230,YELLOW);
                }
            }
            delay(20);
        }
    }
    getch();
    closegraph();



}*/

//DDA Line Drawing Algorithm
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    //gddriver and gmode declaration
    int gd=DETECT, gm,i;
    //declaring variables required according to the algorithm
    float x,y,dx,dy,steps,xinc,yinc;
    //declaring input value variables
    int x0,x1,y0,y1;
    //declaring variables for the axis
    float maxx,maxy;
    //initializing the graph
    initgraph(&gd,&gm,"");
    //divide the x axis by half
    maxx=getmaxx()/2
    //declaring



















}




