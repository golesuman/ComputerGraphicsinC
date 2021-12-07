#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm;
    int i;
    initgraph(&gd,&gm,NULL);
    for(i=0;i<1000;i++)
    {
        cleardevice();
        line(i,200,20+i,200);
        delay(100);
        // cleardevice();

    }
}