#include<stdio.h>
#include<conio.h>
#include<graphics.h>

//hi Ruchi


void tree1();
void tree2();
void building1();
void building2();
void building3();
void DTH();
void signal();
void house();
void streetlight();
void car1(int i);
void foothpath();
void stars();
void dda(int x1,int y1,int x2,int y2);
void mcircle(int xc,int yc,int r);


void main()
{
	int gd=DETECT,gm,x11,y11,x22,y22,i,k;
	initgraph(&gd,&gm,"C:\\TC\\BGI");


			 stars();
			 foothpath();
			 tree1();
			 tree2();
			 building1();
			 building2();
			 building3();
			 DTH();
			 signal();
			 house();
			 streetlight();
			 getch();
			 for(i=0;i<getmaxx();i++)
				{
					setviewport(0,260,639,400,1);
				    car1(i);
					delay(10);
					clearviewport();
			    }




cleardevice();
closegraph();

getch();
}
void dda(int x1,int y1,int x2,int y2)
{
	int deltax,deltay,l,sdx,sdy,i;
	float x,y,dx,dy;


	deltax=abs(x2-x1);
	deltay=abs(y2-y1);

	if(deltax >= deltay)
	{
		l=deltax;
	}
	else
		l=deltay;

	dx=(x2-x1)/(float)l;
	dy=(y2-y1)/(float)l;



	x=x1;
	y=y1;

	putpixel(x,y,15);
    for(i=1;i<=l;i++)
    {
	x=x+dx;
	y=y+dy;
	putpixel(x,y,15);
    }


}

void mcircle(int xc,int yc,int r)
{
	int i,x,y;
	float d;
	d=1.25-r;
	x=0;
	y=r;
	do
	{
		 putpixel(xc+x,yc+y,15);
		putpixel(xc-y,yc-x,15);
		putpixel(xc+y,yc-x,15);
		putpixel(xc-y,yc+x,15);
		putpixel(xc+y,yc+x,15);
		putpixel(xc-x,yc-y,15);
		putpixel(xc+x,yc-y,15);
		putpixel(xc-x,yc+y,15);
  
      if(d<0)
    {
  	  x=x+1;
  	  y=y;
	  d=d+2*x+1;
  }
 


else
{
 
x=x+1;
y=y-1;
d=d+2*(x-y)+10;
}
}
while(x<y);


}



void stars()
 {
	int j,x,y;
	   for(j=0; j<=80; j++)
	    {
	       x=rand()%getmaxx();
		  y=rand()%50;
		  putpixel(x,y,15);
	     }

}

       //foothpath 1
void foothpath()
{

	dda(0,170,getmaxx(),170);//first line


	setcolor(BLACK);
	  dda(0,170,0,230);//left boundary of foothpath
	setcolor(WHITE);

	setcolor(BLACK);
	    dda(getmaxx(),170,getmaxx(),230);//right boundary of foothpath
	setcolor(WHITE);

	 dda(0,220,getmaxx(),220);
		setfillstyle(SOLID_FILL,DARKGRAY);
		floodfill(1,172,WHITE);

    rectangle(0,240,getmaxx(),248); //road strip top
	 setfillstyle(SOLID_FILL,WHITE);
		floodfill(2,242,WHITE);

	rectangle(0,405,getmaxx(),412); //ROAD strip bottom
		setfillstyle(SOLID_FILL,WHITE);
		floodfill(2,407,WHITE);

	 dda(0,230,getmaxx(),230);
		setfillstyle(SOLID_FILL,DARKGRAY);
		floodfill(1,228,WHITE);

	  dda(0,420,getmaxx(),420);//width
		setfillstyle(SOLID_FILL,DARKGRAY);
		floodfill(1,422,WHITE);

}



void car1(int i)
{
	
    setcolor(BLUE);
    rectangle(0+i,5,60+i,120);
		setfillstyle(SOLID_FILL,CYAN);
		floodfill(2+i,12,BLUE);

	rectangle(60+i,75,100+i,120);
		setfillstyle(SOLID_FILL,CYAN);
		floodfill(62+i,77,BLUE);
	circle(20+i,130,10);



	//circle(20+i,130,5);

	circle(50+i,130,10);
	//circle(50+i,130,5);
}





void tree1()
  {
    ellipse(25,100,0,360,15,35);
    setcolor(GREEN);
     setfillstyle(SOLID_FILL,GREEN);
	floodfill(27,102,WHITE);


	setcolor(BROWN);
      line(22,135,22,170);
      line(28,135,28,170);
    setcolor(WHITE);

  }

void building1()
  {
	//building 1
	//setcolor(3);
	dda(50,170,50,50);
	dda(50,50,125,50);
	dda(125,50,125,170);
		setfillstyle(SOLID_FILL,BROWN);
		floodfill(52,52,WHITE);

	//building1 window
     setcolor(15);
	rectangle(58,60,78,90);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(60,62,WHITE);

	rectangle(58,100,78,125);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(60,102,WHITE);

	rectangle(58,135,78,160);
		setfillstyle(SOLID_FILL,BLACK);
	    floodfill(60,137,WHITE);

    rectangle(98,60,118,90);
	setfillstyle(SOLID_FILL,BLACK);
	    floodfill(100,62,WHITE);

	rectangle(98,100,118,125);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(100,102,WHITE);

	rectangle(98,135,118,160);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(100,137,WHITE);
}

void building2()
   {		//building 2

	dda(125,70,200,70);
	dda(200,70,200,170);
		setfillstyle(SOLID_FILL,BLUE);
		floodfill(127,72,WHITE);

		//building2 window
	rectangle(135,80,155,100);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(137,82,WHITE);

	rectangle(135,110,155,130);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(137,112,WHITE);

	rectangle(135,140,155,160);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(137,142,WHITE);


	//building 2 right window
		rectangle(170,80,190,100);
			setfillstyle(SOLID_FILL,BLACK);
			floodfill(172,82,WHITE);

       rectangle(170,110,190,130);
		setfillstyle(SOLID_FILL,BLACK);
			floodfill(172,112,WHITE);

       rectangle(170,140,190,160);
		setfillstyle(SOLID_FILL,BLACK);
			floodfill(172,142,WHITE);
  }

void DTH()
{
		//DTH
	dda(160,70,160,58);
	dda(163,70,163,60);
	arc(170,40,180,325,20);
    arc(165,55,360,132,20);
    dda(165,50,175,35);
}

void building3()

 {
	//building 3
	line(200,170,200,40);
	line(200,40,275,40);
	line(275,40,275,170);
		setfillstyle(SOLID_FILL,BROWN);
		floodfill(202,42,WHITE);

		//building 3 window
	rectangle(210,50,230,70);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(212,52,WHITE);

	rectangle(210,80,230,100);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(212,82,WHITE);

	rectangle(210,110,230,130);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(212,112,WHITE);

	rectangle(210,140,230,160);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(212,142,WHITE);

	//building 3 window right

	rectangle(245,50,266,70);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(247,52,WHITE);

	rectangle(245,80,266,100);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(247,82,WHITE);

	rectangle(245,110,266,130);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(247,112,WHITE);

	rectangle(245,140,266,160);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(247,142,WHITE);
}

 void tree2()
 {
	//tree2

    ellipse(315,100,0,360,20,35);
	setfillstyle(SOLID_FILL,GREEN);
		floodfill(317,102,WHITE);

	//tree2 stem
	    setcolor(BROWN) ;
	    line(312,135,312,170);
		line(320,135,320,170);
		 setcolor(WHITE);

}
void signal()
{
		//signal
	line(370,200,370,120);
	line(375,200,375,120);
	line(370,200,375,200);

	
	rectangle(355,65,390,120);
	
	mcircle(372,80,10);
		setfillstyle(SOLID_FILL,RED);
		floodfill(374,82,WHITE);

	mcircle(372,105,10);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(374,107,WHITE);
}

void house()
{
	//house
	//upper part
	line(430,80,530,80);
	line(415,110,545,110);
	line(430,80,415,110);
	line(530,80,545,110);
	line(430,80,445,110);
	    setfillstyle(SLASH_FILL,GREEN);
	    floodfill(432,82,WHITE);

	     //lower part
	line(415,110,415,170);
	line(445,110,445,170);
		setfillstyle(SLASH_FILL,LIGHTMAGENTA);
		floodfill(432,112,WHITE);

	line(545,110,545,170) ;
		setfillstyle(SLASH_FILL,LIGHTMAGENTA);
		floodfill(543,112,WHITE);

		   //window

	rectangle(460,140,480,120);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(462,122,WHITE);

	rectangle(510,140,530,120);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(522,122,WHITE);
}

void streetlight()
{

    //Street light
	 line(600,200,600,120);
	 line(602,200,602,120);
	 line(600,200,602,200);
	 setcolor(YELLOW);
	 arc(601,95,212,328,25);
	 setcolor(WHITE);
	 circle(578,100,10);
	       setfillstyle(SOLID_FILL,YELLOW);
		floodfill(580,102,WHITE);

	 circle(624,100,10);
	      setfillstyle(SOLID_FILL,YELLOW);
	      floodfill(626,102,WHITE);
	 setcolor(YELLOW);
	 line(601,120,601,90);
	 setcolor(WHITE);
	 circle(601,80,10);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(603,82,WHITE);
}


		
   










