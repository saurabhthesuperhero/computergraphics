//make a shooter game...
//a space shooter try out a simple..

#include<saurabh.h>
class shooter
{
int gd,gm;
int sx1,sx2,sy1,sy2;
int ch;
int ball;
int bx,by;
int mscore;
char c[20];
int enembx,enemby,enembx1,enemby1;
public:
shooter()
{
gd=DETECT;
initgraph(&gd,&gm,"c://turboc3//bgi");
//INITIALZE INTRO...
settextstyle(0,0,2);
outtextxy((getmaxx()/2)-150,(getmaxy())/2,"Space Shooter By Saurabh");
delay(3005);
cleardevice();
settextstyle(0,0,0);
//spaceship loc
sx1=300;
sy1=420;
sx2=320;
sy2=450;
//ball loc
bx=sx1+10;
by=sy1-50;


//enem ball...
srand(1);
randomize();
enembx=rand()%getmaxx();
enemby=rand()%100;
//SOME DESIGN....BRO..
setcolor(15);
line(0,0,0,getmaxy());
line(getmaxx(),0,getmaxx(),getmaxy());
setcolor(3);
line(3,0,3,getmaxy());
line(getmaxx()-3,0,getmaxx()-3,getmaxy());
//

//line()
setcolor(15);
//score.....
mscore=0;

sprintf(c,"Score : %d",mscore);
outtextxy(450,0,c);
//now my name,,,
setcolor(6);
outtextxy(370,470,"A space Shooter-By Saurabh Jadhav");
setcolor(15);
}
void spaceship()
{


rectangle(sx1,sy1,sx2,sy2);

}

void shipmov()
{



	if(kbhit())
		{
		ch=getch();
		 //RIGHT MOVEMENT...BRO.
		if(ch==65)
		{       setcolor(0);
			spaceship();
			setcolor(15);
			sx1=sx1+10;
			sx2=sx2+10;
			randomize();


		}
		//LEFT MOV...
			if(ch==66)
		{       setcolor(0);
			spaceship();
			setcolor(15);
			sx1=sx1-10;
			sx2=sx2-10;
		}
		//just time pass checkihg spawning code...
	    //		if(ch==67)
	   //	{
	     //	 enemspawn();

	      //   BRAVO///	}

		//ball'
		if(ch==90)
		{
		bx=sx1+10;
		ballf();

		}

		if(ch==27)
			exit(0);

		}


}

void ballf()
{
	while(by>-5)
	{
	setcolor(0);
	circle(bx,by,5);
	setcolor(15);
	by=by-10;
	if(by<=enemby)   //LOVE THIS LINE....;{"."}
	{
	if( bx<=enembx+5 && bx>=enembx-5)
	{
	outtextxy(100,200,"Wow !");

	mscore++;
	sprintf(c,"Score : %d",mscore);
	setcolor(0);
	for(int i=450;i<530;i++)
	{
		putpixel(i,0,5);
		putpixel(i,1,5);
		putpixel(i,2,5);
		putpixel(i,3,5);
		putpixel(i,4,5);
		putpixel(i,5,5);

		putpixel(i,6,5);
		putpixel(i,7,5);
		putpixel(i,8,5);
		putpixel(i,9,5);
		putpixel(i,10,5);
	}
	setcolor(15);
	outtextxy(450,2,c);
	enemspawn();
	}
	}
	circle(bx,by,5);
	delay(5);

	}

	by=sy1-50;

}

void enemieinitialize()
{
rectangle(enembx,enemby,enembx+10,enemby+10);

}
//spawning
void enemspawn()
{

setcolor(0);
{
rectangle(enembx,enemby,enembx+10,enemby+10);
}
setcolor(10);
time_t t;

srand(time(&t));
randomize();
randomize();

enembx=rand()%getmaxx()-5;
enemby=(rand()%300)+10;
rectangle(enembx,enemby,enembx+10,enemby+10);

}

};
void main()
{
shooter obj;
obj.enemieinitialize();
while(1)
{
obj.spaceship();
obj.shipmov();

}
getch();
}