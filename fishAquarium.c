#include<graphics.h>
int main()

{
    int i,j,n;
    j=0;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    while(j<4){
    for(i=0;i<600;i+=5)
    {
        cleardevice();
        circle(getmaxx()/2,600-i,5);
        circle(getmaxx()/2+10,730-i,8);
        circle(getmaxx()/2-10,800-i,9);
        circle(getmaxx()/2,900-i,10);
        circle(getmaxx()/2,500-i,11);
        circle(getmaxx()/2,660-i,4);
        circle(getmaxx()/2,770-i,7);
        circle(getmaxx()/2,830-i,6);
        circle(getmaxx()/2,700-i,12);
        circle(getmaxx()/2,1000-i,13);
        circle(getmaxx()/2-i*0.2,100-i,12);
        circle(getmaxx()/2+i*0.2,200-i,8);
        circle(getmaxx()/2,400-i,5);

        //expanding bubbles
        circle(350,400-i,i*0.05);
        circle(360,300-i,i*0.05);
        circle(380,500-i,i*0.01);
        circle(320,390-i,i*0.01);
        circle(330,870-i,10);
        circle(370,440-i,i*0.05);
        circle(360+0.2*i,100-i,i*0.1);
        circle(320-0.2*i,198-i,i*0.1);
        circle(310,500-i,i*0.01);
        circle(350+0.2*i,70-i,i*0.1);
        circle(340-0.2*i,150-i,i*0.1);

        circle(330,700-i,20);
        circle(325,440-i,12);
        circle(360,900-i,14);
        circle(380,800-i,22);
        circle(390,990-i,12);



        ellipse(300,400,-120,40,15,12);
        ellipse(330,400,150,280,15,12);


        ellipse(500,400,-120,40,15,12);
        ellipse(530,400,150,280,15,12);


        ellipse(400,400,-120,40,15,12);
        ellipse(430,400,150,280,15,12);

        ellipse(100,420,-120,40,15,12);
        ellipse(130,420,150,280,15,12);


        ellipse(200,420,-120,40,15,12);
        ellipse(230,420,150,280,15,12);


        ellipse(100,330,-120,40,15,12);
        ellipse(130,330,150,280,15,12);


        ellipse(500,300,-120,40,15,12);
        ellipse(530,300,150,280,15,12);


        ellipse(330,400,-120,40,15,12);
        ellipse(360,400,150,280,15,12);

        ellipse(430,420,-120,40,15,12);
        ellipse(460,420,150,280,15,12);


        ellipse(530,380,-120,40,15,12);
        ellipse(560,380,150,280,15,12);


        ellipse(60,420,0,360,30,10*2);
        ellipse(180,450,0,360,30,10*2);
        ellipse(250,440,0,360,38,10*2);
        ellipse(490,450,0,360,30,10*2);
        ellipse(400,440,0,360,30,10*2);


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
            delay(10);
        }

        else
        {
            pieslice(300-i,100, 0, 30, 5);
            delay(10);
        }

        //bubbles
        
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);
        // circle(getmaxx()/2,400-i,5+i*0.2);

        
        delay(2);    
    }
    j++;
    }
}