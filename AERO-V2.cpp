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
	circle(275+i,470,10);			//front wheel
	circle(140+i,465,15);			//backwheel
		//windows 1
	line(270+i,410,270+i,420);
	line(280+i,410,280+i,420);
	line(270+i,410,280+i,410);
	line(270+i,420,280+i,420);
	//window 2
	line(250+i,410,250+i,420);
	line(260+i,410,260+i,420);
	line(250+i,410,260+i,410);
	line(250+i,420,260+i,420);
	//window 3
	line(230+i,410,230+i,420);
	line(240+i,410,240+i,420);
	line(230+i,410,240+i,410);
	line(230+i,420,240+i,420);
	//window 4
	line(210+i,410,210+i,420);
	line(220+i,410,220+i,420);
	line(210+i,410,220+i,410);
	line(210+i,420,220+i,420);
	//window 5
	line(190+i,410,190+i,420);
	line(200+i,410,200+i,420);
	line(190+i,410,200+i,410);
	line(190+i,420,200+i,420);
	//window 6
	line(170+i,410,170+i,420);
	line(180+i,410,180+i,420);
	line(170+i,410,180+i,410);
	line(170+i,420,180+i,420);
	//window 7
	line(150+i,410,150+i,420);
	line(160+i,410,160+i,420);
	line(150+i,410,160+i,410);
	line(150+i,420,160+i,420);
	//window 8
	line(130+i,410,130+i,420);
	line(140+i,410,140+i,420);
	line(130+i,410,140+i,410);
	line(130+i,420,140+i,420);
	for(j=0;j<=10;j++)
	{
		line(0,477+j,1100,477+j);		//runway
	}
	
	delay(2);
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
	circle(275+i,470-i+299,10);					//frontwheel
	circle(140+i,465-i+299,15);					//back wheel
		//windows 1
	line(270+i,410-i+299,270+i,420-i+299);
	line(280+i,410-i+299,280+i,420-i+299);
	line(270+i,410-i+299,280+i,410-i+299);
	line(270+i,420-i+299,280+i,420-i+299);
	//window 2
	line(250+i,410-i+299,250+i,420-i+299);
	line(260+i,410-i+299,260+i,420-i+299);
	line(250+i,410-i+299,260+i,410-i+299);
	line(250+i,420-i+299,260+i,420-i+299);
	//window 3
	line(230+i,410-i+299,230+i,420-i+299);
	line(240+i,410-i+299,240+i,420-i+299);
	line(230+i,410-i+299,240+i,410-i+299);
	line(230+i,420-i+299,240+i,420-i+299);
	//window 4
	line(210+i,410-i+299,210+i,420-i+299);
	line(220+i,410-i+299,220+i,420-i+299);
	line(210+i,410-i+299,220+i,410-i+299);
	line(210+i,420-i+299,220+i,420-i+299);
	//window 5
	line(190+i,410-i+299,190+i,420-i+299);
	line(200+i,410-i+299,200+i,420-i+299);
	line(190+i,410-i+299,200+i,410-i+299);
	line(190+i,420-i+299,200+i,420-i+299);
	//window 6
	line(170+i,410-i+299,170+i,420-i+299);
	line(180+i,410-i+299,180+i,420-i+299);
	line(170+i,410-i+299,180+i,410-i+299);
	line(170+i,420-i+299,180+i,420-i+299);
	//window 7
	line(150+i,410-i+299,150+i,420-i+299);
	line(160+i,410-i+299,160+i,420-i+299);
	line(150+i,410-i+299,160+i,410-i+299);
	line(150+i,420-i+299,160+i,420-i+299);
	//window 8
	line(130+i,410-i+299,130+i,420-i+299);
	line(140+i,410-i+299,140+i,420-i+299);
	line(130+i,410-i+299,140+i,410-i+299);
	line(130+i,420-i+299,140+i,420-i+299);
	for(j=0;j<=10;j++)
	{
		line(0,477+j,1100,477+j);			//line for runway
	}
	delay(2);
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
	circle(275+i,470-301,10);				//front wheel
	circle(140+i,465-301,15);				//backwheel
		//windows 1
	line(270+i,410-301,270+i,420-301);
	line(280+i,410-301,280+i,420-301);
	line(270+i,410-301,280+i,410-301);
	line(270+i,420-301,280+i,420-301);
	//window 2
	line(250+i,410-301,250+i,420-301);
	line(260+i,410-301,260+i,420-301);
	line(250+i,410-301,260+i,410-301);
	line(250+i,420-301,260+i,420-301);
	//window 3
	line(230+i,410-301,230+i,420-301);
	line(240+i,410-301,240+i,420-301);
	line(230+i,410-301,240+i,410-301);
	line(230+i,420-301,240+i,420-301);
	//window 4
	line(210+i,410-301,210+i,420-301);
	line(220+i,410-301,220+i,420-301);
	line(210+i,410-301,220+i,410-301);
	line(210+i,420-301,220+i,420-301);
	//window 5
	line(190+i,410-301,190+i,420-301);
	line(200+i,410-301,200+i,420-301);
	line(190+i,410-301,200+i,410-301);
	line(190+i,420-301,200+i,420-301);
	//window 6
	line(170+i,410-301,170+i,420-301);
	line(180+i,410-301,180+i,420-301);
	line(170+i,410-301,180+i,410-301);
	line(170+i,420-301,180+i,420-301);
	//window 7
	line(150+i,410-301,150+i,420-301);
	line(160+i,410-301,160+i,420-301);
	line(150+i,410-301,160+i,410-301);
	line(150+i,420-301,160+i,420-301);
	//window 8
	line(130+i,410-301,130+i,420-301);
	line(140+i,410-301,140+i,420-301);
	line(130+i,410-301,140+i,410-301);
	line(130+i,420-301,140+i,420-301);
	for(j=0;j<=10;j++)
	{
		line(0,477+j,1100,477+j);			//runway
	}	
	delay(2);
}
}
int main()
{
int gd = DETECT, gm,i;
//initgraph(&gd,&gm,"");
initwindow(1360,720);
setbkcolor(LIGHTCYAN);				//setting backgroind color to lightcyan
setcolor(BLACK);					//setting color of text
run();
fly();
flyrun();
getch();
}
