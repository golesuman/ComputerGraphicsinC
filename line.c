#include<stdio.h>  
#include<graphics.h>  
#include<math.h>  
void rotateLine(int x1, int y1,int x2,int y2,int angle)
{
    int c,s;
    c = cos(angle *3.14/180);
    s = sin(angle *3.14/180);  
    int pos[4]={ 
    x1 = floor(x1 * c + y1 * s), 
    y1 = floor(-x1 * s + y1 * c),  
    x2 = floor(x2 * c + y2 * s), 
    y2 = floor(-x2 * s + y2 * c)};
    cleardevice(); 

    for(int i=0;i<4;i++)
    {
        line(pos[i], pos[i+1] ,pos[i+2],pos[i+3]);  
    } 
}
int main()  
{  
    int gd=DETECT,gm,x1,y1,x2,y2;  
    double s,c, angle;  
    initgraph(&gd, &gm, NULL);  
    setcolor(RED);  
    // printf("Enter coordinates of line: ");  
    // scanf("%d%d%d%d",&x1,&y1,&x2,&y2);  
    cleardevice();  
    // setbkcolor(WHITE);  
    x1=100;
    y1=50;
    x2=200;
    y2=50;
    // line(x1,x2,y1,y2);  
    // getch();  
    // setbkcolor(BLACK);  
    // printf("Enter rotation angle: ");  
    // scanf("%lf", &angle); 
    angle=45; 
    // setbkcolor(WHITE);
   
    for(int j=0;j<20*360;j++)
    {
    cleardevice();
    rotateLine(x1,y1,x2,y2,j);
    delay(5);
    }

    
    getch();  
    closegraph();  
return 0;  
}  