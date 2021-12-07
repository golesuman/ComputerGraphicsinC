#include<graphics.h>
#include<stdio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    setcolor(15);
    int i;
    for(i=;i<500;i+=10)
    {
        circle(50+i,50,20);
    }
    
    delay(500000);
}
