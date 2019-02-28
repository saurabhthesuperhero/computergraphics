#include<saurabh.h>
class runner
{
int x;
int gd,gm;
int key;
int bx1,bx2,by1,by2;
int borderd;
int rx,ry;
//enem
int ex1,ex2,ey1,ey2;
//SCORE
int score;
char c[50];
//int heart
public:
int heart;
char h[50];
char end[50];
public:
runner()
{
gd=DETECT;
initgraph(&gd,&gm,"c://turboc3//bgi");

//bar
bx1=10;
by1=getmaxy()-60;
bx2=30;
by2=getmaxy()-30;
//enem initialze
ex1=getmaxx()-10;
ex2=getmaxx();
ey1=getmaxy()-60;
ey2=getmaxy()-20;
//borderline
line(0,getmaxy()-5,getmaxx(),getmaxy()-6);
line(0,getmaxy()-4,getmaxx(),getmaxy()-5);
//stars
 rx=rand() % getmaxx();
 ry=rand() % getmaxy();
//        score
score=0;
//HEART
heart=3;

}

void player()
{       setfillstyle(2,15);
	bar(bx1,by1,bx2,by2);
}
void playermov(int key)
{


	if(key==27)
	{
	exit(0);
	}
		if(key==65)   //left a key
	{

		  setfillstyle(2,0);
			bar(bx1,by1,bx2,by2);
			bx1=bx1-3;
			bx2=bx2-3;
			setfillstyle(2,7);
			bar(bx1,by1,bx2,by2);

	}
	if(key==68)//right d key
	{

		  setfillstyle(2,0);
			bar(bx1,by1,bx2,by2);
			bx1=bx1+3;
			bx2=bx2+3;
			setfillstyle(2,7);
			bar(bx1,by1,bx2,by2);
	}

	if(key==90)
	{      for(int i=0;i<18;i++)
		{       setfillstyle(2,0);
			bar(bx1,by1,bx2,by2);
			by1=by1-5;
			by2=by2-5;
			setfillstyle(2,7);
			bar(bx1,by1,bx2,by2);
		}
		delay(100);

		 for( i=0;i<12;i++)
		{       setfillstyle(2,0);
			bar(bx1,by1,bx2,by2);
			bx1=bx1+4;
			bx2=bx2+4;
			setfillstyle(2,7);
			bar(bx1,by1,bx2,by2);
		}
		   for(i=0;i<18;i++)
		{       setfillstyle(2,0);
			bar(bx1,by1,bx2,by2);
			by1=by1+5;
			by2=by2+5;
			setfillstyle(2,7);
			bar(bx1,by1,bx2,by2);
		}

	}




}
void enem()
{
 setfillstyle(5,4);
 bar(ex1,ey1,ex2,ey2);

}
void enemmov()
{
		scoreupdate();
		if(ex2<0)
		{
		ex1=getmaxx()-10;
		ex2=getmaxx();
		ey1=getmaxy()-60;
		ey2=getmaxy()-20;

		}
			setfillstyle(5,0);
			bar(ex1,ey1,ex2,ey2);

			ex1=ex1-6;
			ex2=ex2-6;

			setfillstyle(5,4);
			bar(ex1,ey1,ex2,ey2);
			delay(10);
		if(bx2>ex1 && bx2<ex1+2  )
		{
			if(by1<=ey1+2)
			{
			heart--;
			setcolor(15);
		      //	cprintf(h,"Heart: %d",heart);
		      //	outtextxy(100,200,h);
		       //	outtextxy(100,200,"hello");
			 }
		}

}
void theend()
{

cleardevice();
settextstyle(2,0,9);
outtextxy(250,200,"GAME OVER");
sprintf(end,"High Score: %d",score);
outtextxy(180,300,end);
settextstyle(2,0,6);
outtextxy(140,340,"Game Created:- By Saurabh Jadhav");
outtextxy(140,355,"For more Awesome Games logon:");
outtextxy(140,370,"weareawesome.tk");

getch();
if(key==27)
{
exit(0);
}


}

void scoreupdate()
{
score=score+1;
settextstyle(2,0,8);
sprintf(c,"Score: %d        Heart: %d ",score,heart);
outtextxy(200,300,c);
	setcolor(0);
	for(int i=200;i<650;i++)
	{
		putpixel(i,300,0);
		putpixel(i,301,0);
		putpixel(i,302,0);
		putpixel(i,303,0);
		putpixel(i,304,0);
		putpixel(i,305,0);

		putpixel(i,306,0);
		putpixel(i,307,0);
		putpixel(i,308,0);
		putpixel(i,309,0);
		putpixel(i,310,0);
		putpixel(i,311,0);
		putpixel(i,312,0);
		putpixel(i,313,0);
		putpixel(i,314,0);
		putpixel(i,315,0);

		putpixel(i,316,0);
		putpixel(i,317,0);
		putpixel(i,318,0);
		putpixel(i,319,0);
		putpixel(i,320,0);

		putpixel(i,321,0);
		putpixel(i,322,0);

	}
	setcolor(15);
	outtextxy(200,300,c);

}
void Rain()
{

int x=0;
int GroundY=getmaxy()*0.75;
for(int i=0;i<400;i++)
{
setcolor(0);
  line(rx,ry,rx+0.5,ry+4);
 rx=rand() % getmaxx();
 ry=rand() % getmaxy();

 if(ry<GroundY-4)
 {
  if(ry<GroundY-120 || (ry>GroundY-120 && (rx<x-20 || rx>x+60)))
  setcolor(15);
  line(rx,ry,rx+0.5,ry+4);

 }
 delay(100);
}
}


};
void main()
{
runner obj;
obj.player();
obj.enem();
while(1)
{
obj.scoreupdate();
while(!kbhit())
{
obj.enemmov();
obj.enemmov();
//obj.Rain();
}
int key=getch();
obj.playermov(key);
obj.enemmov();

if(obj.heart<=3)
{
break;
}
}
obj.theend();
getch();
//congo bro u done it!!
}