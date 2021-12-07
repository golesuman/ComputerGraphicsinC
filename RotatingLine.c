#include<math.h>
#include<stdio.h>
#include<graphics.h>
void lineRotate(int x1,int y1, int x2,int y2, int angle)
{
   double theta= angle;/*(double)(angle*180)*M_PI/180.0;*/
   int point[4]=
   {
      (int)(x1*cos(theta)-y1*sin(theta)+x1),
      (int)(x1*sin(theta)+y1*cos(theta)+y1),
      (int)(x2*cos(theta)-y2*sin(theta)+x2),
      (int)(x2*sin(theta)+y2*cos(theta)+y2)
   };
   for(int i=0;i<4;i++)
   {
      line(point[i],point[i+1],point[i+2],point[i+3]);
   }

}
int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,NULL);
   // lineRotate(50,30,80,30,50);
   for(int i=0;i<=20*360;i++)
   {
      cleardevice();
      lineRotate(50,30,100,30,i);
      delay(50);

      // SDL_GL_pBuffers();
   }

}