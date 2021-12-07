#include<graphics.h>
#include<stdio.h>
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.80
#define Radius 40
int ldisp=0;
void DrawMan(int x,int ldisp)
{
  
    // x = 50;
       int midy = getmaxy() / 2;
       int y = midy - 100;
       int radius=10;
//head
  circle(x,GroundY-90,10);
  line(x,GroundY-80,x-50,GroundY-30);
//hand
// line(x,GroundY-70,x+10,GroundY-60);
// line(x,GroundY-70,x+10,GroundY-55);
  while(x<getmaxx()-25)
  {
    // cleardevice();
    line(x, y + radius + 10, x - 15, y + radius + 30);
    line(x - 15, y + radius + 30, x + 15, y + radius + 40);
    delay(150);

    line(x, y + radius + 5, x - 10, y + radius + 20);
    line(x - 10, y +  radius + 20, x - 10, y + radius + 45);
    line(x, y + radius + 5, x + 5, y + radius + 25);
    line(x + 5, y + radius + 25, x + 15, y + radius + 45);
    delay(100);

    line(x, y + radius + 5, x - 20, y + radius + 20);
    line(x - 20, y + radius + 20, x - 20, y + radius + 30);
    line(x, y + radius + 5, x + 20, y + radius + 25);
    line(x + 20, y + radius + 25, x + 30, y + radius + 30);
    delay(150);
    cleardevice();
    x++;



    line(x, y + radius + 5, x - 15, y + radius + 10);
    line(x - 15, y + radius + 10, x - 8, y + radius + 25);
    line(x, y + radius + 5, x + 15, y + radius + 20);
    line(x + 15, y + radius + 20, x + 30, y + radius + 20);
    delay(150);
    x++;
  }
}
int main()
{
    int x=0,f=0;
    int rx1,ry1,sep;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    int i,xc,yc;
    yc=getmaxy()/2-Radius;
    i=0;
  
    delay(50);
    while(i<1000)
    {
      xc=i;
      cleardevice();
      DrawMan(x,ldisp);
    if(i%2==0)
      {
        line(xc,yc+Radius,xc,yc-Radius);
        // line(xc-Radgius,yc,xc+Radius,yc);
      }
    else
      {
        rx1=xc-(Radius/sqrt(2));
        ry1=yc-(Radius/sqrt(2));
        sep=sqrt(2)*Radius;
        line(rx1,ry1,rx1+sep,ry1+sep);
        line(rx1,ry1+sep,rx1+sep,ry1);
      } 
          delay(50);
          
          x=(x+2)%ScreenWidth;
          i+=3;
      }

    }
     