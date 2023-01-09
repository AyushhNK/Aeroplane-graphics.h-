#include<graphics.h>
#include<conio.h>
#include<dos.h>
void run()
{
	int i,j;
	for(i=10;i<=300;i++)
{
	cleardevice();
	line(100+i,400,300+i,400);		//line for upper body
	line(100+i,450,300+i,450);		//line for lower body
	line(300+i,400,325+i,430);		//line for upper head
	line(300+i,450,325+i,430);		//line for lower head
	line(50+i,375,100+i,400);		//line for upper tail
	line(50+i,375,100+i,450);		//line for lower tail
	line(200+i,425,225+i,425);		//line in between the body
	line(200+i,425,100+i,470);		//line for front wing
	line(225+i,425,130+i,470);		//line for front wing
	line(100+i,470,130+i,470);		//line to join two front wing
	line(200+i,400,140+i,360);		//line for back wing
	line(225+i,400,170+i,360);		//line for back wing
	line(140+i,360,170+i,360);		//line to join two back wing
	line(275+i,450,275+i,463);		//line to join front wheel
	circle(275+i,470,7);			//front wheel
	circle(140+i,465,15);			//backwheel
	for(j=0;j<=10;j++)
	{
		line(0,477+j,1100,477+j);		//runway
	}
	
	delay(5);
}
	
}
void fly()
{
	int i,j;
	for(i=300;i<=600;i++)
{
	cleardevice();
	line(100+i,400-i+299,300+i,400-i+299);		//line for upper body
	line(100+i,450-i+299,300+i,450-i+299);		//line for lower body
	line(300+i,400-i+299,325+i,430-i+299);		//line for upper head
	line(300+i,450-i+299,325+i,430-i+299);		//line for lower head
	line(50+i,375-i+299,100+i,400-i+299);		//line for upper tail
	line(50+i,375-i+299,100+i,450-i+299);		//line for lower tail
	line(200+i,425-i+299,225+i,425-i+299);		//line in between the body
	line(200+i,425-i+299,100+i,470-i+299);		//line for front wing
	line(225+i,425-i+299,130+i,470-i+299);		//line for front wing
	line(100+i,470-i+299,130+i,470-i+299);		//line to join two front wing
	line(200+i,400-i+299,140+i,360-i+299);		//line for back wing
	line(225+i,400-i+299,170+i,360-i+299);		//line for back wing
	line(140+i,360-i+299,170+i,360-i+299);		//line to join two back wing
	line(275+i,450-i+299,275+i,463-i+299);		//line joining front wheel
	circle(275+i,470-i+299,7);					//frontwheel
	circle(140+i,465-i+299,15);					//back wheel
	for(j=0;j<=10;j++)
	{
		line(0,477+j,1100,477+j);			//line for runway
	}
	delay(5);
}
}
void flyrun()
{
		int i,j;
	for(i=600;i<=1300;i++)
{
	cleardevice();
	line(100+i,400-301,300+i,400-301);		//line for upper body
	line(100+i,450-301,300+i,450-301);		//line for lower body
	line(300+i,400-301,325+i,430-301);		//line for upper head
	line(300+i,450-301,325+i,430-301);		//line for lower head
	line(50+i,375-301,100+i,400-301);		//line for upper tail
	line(50+i,375-301,100+i,450-301);		//line for lower tail
	line(200+i,425-301,225+i,425-301);		//line in between the body
	line(200+i,425-301,100+i,470-301);		//line for front wing
	line(225+i,425-301,130+i,470-301);		//line for front wing
	line(100+i,470-301,130+i,470-301);		//line to join two front wing
	line(200+i,400-301,140+i,360-301);		//line for back wing
	line(225+i,400-301,170+i,360-301);		//line for back wing
	line(140+i,360-301,170+i,360-301);		//line to join two back wing
	line(275+i,450-301,275+i,463-301);		//line joining front wheel
	circle(275+i,470-301,7);				//front wheel
	circle(140+i,465-301,15);				//backwheel
	for(j=0;j<=10;j++)
	{
		line(0,477+j,1100,477+j);			//runway
	}	
	delay(5);
}
}
int main()
{
int gd = DETECT, gm,i;
initgraph(&gd,&gm,"");
setbkcolor(LIGHTCYAN);				//setting backgroind color to lightcyan
setcolor(BLACK);					//setting color of text
run();
fly();
flyrun();
getch();
}
