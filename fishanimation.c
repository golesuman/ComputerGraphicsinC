#include<graphics.h>
int main() 
{
	int gd=DETECT,gm;
    int f=0;
	int newx=0,newy=0,inc_y=5;
	initgraph(&gd,&gm,NULL);
	cleardevice();
	int i=0;

    int x1 = 10;
        // int i =0;
    int y1 = 0;

    int x2 = 0;
    int y2 = 70;
    while (i<=800)
    {
        

        /*............bigfish..................*/
        ellipse(i+80,300,0,360,100,50);
        line(i+150,310,178+i,310);
        //eye
		circle(i+150,290,3);
        
		pieslice(i-20,300, 135, 225, 50);
        if(i%2==0){
 
            pieslice(80+i, 300, 205, 250, 45);
            delay(50);}
        else
        {
            pieslice(80+i,300, 125, 170, 45);
            delay(50);
        }
        /*.............middle fish..............*/
        ellipse(520-i,200,0,360,90,30);

        //mouth
        line(435-i,210,460-i,210);
        //eye
		circle(470-i,193,3);
        //tail
        pieslice(615-i,200,-25,30,50);
        //fins
        if(i%2==0)
        {

            pieslice(500-i, 200, -10,20, 40);
            delay(50);
        }

        else
        {
            pieslice(500-i,200, 0, 30, 40);
            delay(50);
        }

        /*------------------small fish---------------------*/
        
        //body
        ellipse(300-i,100,0,360,20,10);
        //tail
		line(283-i,105,293-i,105);

        //eye
		circle(290-i,95,3);
        //tail
        pieslice(320-i,100,-5,15,30);

        //fins

        if(i%2==0)
        {

            pieslice(300-i, 100, -5,60, 5);
            delay(50);
        }

        else
        {
            pieslice(300-i,100, 0, 30, 5);
            delay(50);
        }


        //bubbles
        circle(getmaxx()/2,400-i,15);
        circle(18,400-i,4);
        circle(28,500-i,4);

        circle(498,800-i-7,5);
        
        circle(590,500-i-5,12);

        circle(120,600-i-5,5);
        
        circle(30,50-i,4);
        circle(380,550-i-8,5);
        
        circle(500,630-i-3,4);

        circle(550,500-i-9,18);


        circle(18,608-i,4);
        circle(28,508-i,4);

        circle(498,600-i-7,5);
        
        circle(591,645-i-5,12);

        circle(123,632-i-5,5);
        
        circle(35,500-i,4);
        circle(38,694-i-8,5);
        
        circle(50,670-i-3,4);

        circle(55,550-i-9,18);

        delay(50);
        i+=5;
        cleardevice();
    }
}