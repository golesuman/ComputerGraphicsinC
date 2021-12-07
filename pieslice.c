#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);


setlinestyle(DASHED_LINE, 1, 2);
int x1 = 10;
int i =0;
int y1 = 0;

int x2 = 0;
int y2 = 70;



while (i < 700)

{

line(x1, y1, x2, y2);

x1 = x1 + 30;

y2 = y2 + 60;

i++;

}

    delay(100000);


}