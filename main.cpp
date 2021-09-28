//Modify Bresenham's line drawing algorithm for Thick line
#include <stdio.h>
#include <graphics.h>

//void bresenham(int x1,int y1,int x2,int y2,int choice1,int choice2)
void bresenham(int x1,int y1,int x2,int y2)
{
    int dx,dy,p;

    dx=x2-x1;
    dy=y2-x1;
    p=2*dy-dx;
    while(x1<=x2)
    {
        if(p<0)
        {
            x1=x1+1;
            y1=y1;
            p=p+2*dy;

        }
        else{
            x1=x1+1;
            y1=y1+1;
            p=p+2*(dy-dx);
          }
       // putpixel(choice1,choice2,WHITE);
       putpixel(x1,y1,YELLOW);
        delay(10);
    }


}

int main()
{
   int gd=DETECT,gm=DETECT;
   initgraph(&gd,&gm,"");
   int x1,x2,y1,y2;
   printf("Enter the 2 points of the lines:");
   printf("\nEnter point x1,y1");
   scanf("%d%d",&x1,&y1);
   printf("\nEnter point x2,y2");
   scanf("%d%d",&x2,&y2);

   /*int choice1,choice2;
   printf("Enter the thickness of the lines:\n");
   scanf("%d %d",&choice1,&choice2);
   */
   bresenham(x1,x2,y1,y2);
   getch();
   closegraph();
   getch();

}
