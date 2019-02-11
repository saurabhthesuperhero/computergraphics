//digital clock program
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://turboc3//bgi");
int hh=0,mm=0,ss=0;
char c[50];
int n;

//now work for increamenting the time...
while(!kbhit())
{



n=sprintf(c,"%d : %d : %d",hh,mm,ss);
settextstyle(0,0,5);
outtextxy(160,60,"Indian Clock");

outtextxy(160,120,c);
ss++;
if(ss>=60)
{
mm++;
ss=0;

}
if(mm>=60)
{
hh++;
mm=0;

}



delay(1000);
cleardevice();


}











getch();


}