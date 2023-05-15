#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
 int gd = DETECT, gm;
 initgraph(&gd,&gm,"C:\\turboc\\bgi");
 //setcolor(YELLOW);
 int x,y,r=200,theta;
   setcolor(RED);
 for(theta=1;theta<=180;theta++)
 {
  x=r*cos(theta);
  y=r*sin(theta);
  putpixel(x+320,y+240,3);
 }
 getch();
 closegraph();
}
