#include<graphics.h>
int main() 
{
	int gd=DETECT,gm;
    int f=0;
	int newx=0,newy=0,inc_y=5;
	initgraph(&gd,&gm,NULL);
	cleardevice();
	int i;

	while(f<1000) {

        //body
		ellipse(520-newx,200,30,330,90,30);
        //eye
		circle(450-newx,193,3);
        //body

		
		// pieslice(newx-50,200, 225, 135, 50);

		line(500-newx,190,540-newx,150+newy);
		line(530-newx,190,540-newx,150+newy);
		


		ellipse(newx+20,300,30,330,70,30);
        //eye
		circle(newx+60,300,3);
        
		pieslice(newx-50,300, 135, 225, 50);

		// line(newx,300,newx+20,100-newy);
		// line(newx+30,300,newx+20,100-newy);
		
		if(newx>=500)
		     newx=0;
		if(newy>=82)
		    inc_y=-5;
		newx=newx+5;
		if(newy<=0)
		    inc_y=5;
		newy=newy+inc_y;


        f++;
		delay(50);
		cleardevice();
        
	}
	cleardevice();
}