#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm;
    int i;
    initgraph(&gd,&gm,NULL);
    for(i=0;i<1000;i++)
    {
        setlinestyle(1,1,1);
        // for(j=0;j<10;j+=20){
        //     line()
        // }
        line(i,getmaxy()/2,(getmaxx()/2),getmaxy()/2);
        delay(10);
        // setlinestyle(1,1,1);
        // line(getmaxx()/2,getmaxy()/2,(getmaxx()/2+i),getmaxy()/2);
        delay(10);
    }
    closegraph();
}