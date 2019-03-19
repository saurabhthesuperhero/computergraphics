
#include<saurabh.h>
void maindora();
void handmov();
void dialogue();
void handstill();
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
//..head

while(1)
{

maindora();
handstill();
dialogue();
delay(1000);
cleardevice();
maindora();
handmov();
dialogue();
delay(1000);
cleardevice();

}

getch();



}
void dialogue()
{
setcolor(WHITE);
char c[20];

settextstyle(1,0,3);
int x=3,n;
outtextxy(378,258,"Hi Saurabh");
//n=sprintf(c,"Love you ");
outtextxy(382,278,"Love you !");

}
void maindora()
{
setcolor(BLUE);
setfillstyle(1,BLUE);
fillellipse(200,190,100,70);
fillellipse(200,300,96,100);
fillellipse(180,390,22,30);
fillellipse(230,390,22,30);
//




//..body
setcolor(WHITE);
setfillstyle(1,WHITE);
sector(200,230,0,180,70,76);
sector(200,230,180,360,75,120);
setcolor(RED);
setfillstyle(1,RED);
bar(123,230,278,236);
//pocket
setcolor(BLACK);
arc(200,280,180,360,30);
line(170,280,234,280);


//bell

setcolor(BLACK);
setfillstyle(1,YELLOW);
fillellipse(200,240,10,10);
line(190,240,210,240);
//eyes//
setcolor(BLACK);
setfillstyle(1,WHITE);
fillellipse(180,160,15,20);
fillellipse(216,160,15,20);
setcolor(BLACK);
setfillstyle(1,BLACK);
fillellipse(180,165,2,3);
fillellipse(216,165,2,3);


  //nose

setcolor(BLACK);
setfillstyle(1,RED);
fillellipse(200,177,10,10);
//much bhai
line(225,185,255,175);
line(225,189,255,189);
line(225,193,255,199);

//left wali much..
line(175,185,145,175);
line(175,189,145,189);
line(175,193,145,199);

line(200,186,200,200);
arc(200,200,180,360,25);




}
void handstill()
{
//comeon hands time...
setcolor(BLUE);
setfillstyle(1,BLUE);
fillellipse(96,294,16,55);
fillellipse(305,294,16,55);
setfillstyle(1,WHITE);
fillellipse(96,345,10,10);
fillellipse(305,345,10,10);

}
void handmov()
{


//move hands
setcolor(BLUE);
setfillstyle(1,BLUE);
fillellipse(74,260,55,16);
fillellipse(326,260,55,16);
setfillstyle(1,WHITE);
fillellipse(30,258,10,10);
fillellipse(369,258,10,10);


}