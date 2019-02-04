#include<saurabh.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c://turboc3//bgi");
	int x1,y1,x2,y2,ch;
	int x1t,y1t,x2t,y2t;
	x1=0;
	y1=0;
	x2=10;
	y2=60;
	x1t=getmaxx()-10;
	y1t=0;
	x2t=getmaxx();
	y2t=60;

	//NOW FOR BALL;
	int bx=10,by=10,bix=10,biy=10;
	 outtextxy(240,0,"Player 1:   Player 2");
		line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	while(1)
	{
		line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	{       setfillstyle(1,0);
		setcolor(0);
		fillellipse(bx,by,10,10);
		bx=bx+bix;
		by=by+biy;

		if (bx<=0 || bx>=getmaxx())
			bx=10;
		if (by<=0 || by>=getmaxy())
			biy=-biy;

	       //	if (bx>=getmaxx()-20  ||  by<=y1 &&  by>=y2)
		//	bix=-bix;
		setfillstyle(1,14);
		fillellipse(bx,by,10,10);
		delay(100);


	}
	if(kbhit())
	{
	ch=getch();

	if(ch==65)
	//p1down
		{
		setcolor(0);
		rectangle(x1,y1,x2,y2);

		//i want oscor for thios.....
		y1=y1+10;

		y2=y2+10;
		setcolor(15);
	       //	setfillstyle(1,13);
		rectangle(x1,y1,x2,y2);

		}
	if(ch==66)
	//p1up
		{
	       //	setfillstyle(1,0);
		setcolor(0);
		rectangle(x1,y1,x2,y2);

		y1=y1-10;

		y2=y2-10;
		setcolor(15);

		rectangle(x1,y1,x2,y2);
		}

		//now work for	 player 2 moment bro....keep it simple...ok'///

	if(ch==76)
	//p2down
		{
		setcolor(0);
		rectangle(x1t,y1t,x2t,y2t);

		y1t=y1t+10;

		y2t=y2t+10;
		setcolor(15);
		rectangle(x1t,y1t,x2t,y2t);
		}
	if(ch==77)
	//p2up
		{
		setcolor(0);
		rectangle(x1t,y1t,x2t,y2t);
		y1t=y1t-10;

		y2t=y2t-10;
		setcolor(15);
		rectangle(x1t,y1t,x2t,y2t);
		}

	if(ch==27)
		exit(0);
	}
	}



}