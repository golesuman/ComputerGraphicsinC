#include<stdio.h>
#include<graphics.h>

#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.80

int ldisp=0;
void DrawMan(int x,int ldisp)
{
//head
circle(x,GroundY-90,10);
line(x,GroundY-80,x,GroundY-30);
//hand
line(x,GroundY-70,x+10,GroundY-60);
line(x,GroundY-65,x+10,GroundY-55);
line(x,GroundY-30,x+ldisp,GroundY);
line(x,GroundY-30,x-ldisp,GroundY);
}

void Rain(int x)
{
int i,rx,ry;
for(i=0;i<400;i++)
{
 rx=rand() % ScreenWidth;
 ry=rand() % ScreenHeight;
 if(ry<GroundY-4)
 {
  if(ry<GroundY-120 || (ry>GroundY-120 && (rx<x-20 || rx>x+60)))
  line(rx,ry,rx+0.5,ry+4);
 }
}
}
int main()
{
  int gd=DETECT,gm,x=0;
  int f=0;
  //Change BGI directory according to yours
  initgraph(&gd,&gm,NULL);
  while(f<1000)
  {
   //Draw Ground
   line(0,GroundY,ScreenWidth,GroundY);
   Rain(x);
   ldisp=(ldisp+2)%20;
   DrawMan(x,ldisp);
   delay(50);
   cleardevice();
   x=(x+2)%ScreenWidth;
   f++;
}
    return 0;
  getch();
}
