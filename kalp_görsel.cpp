#include <graphics.h>
#include <string.h>
#include <math.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>
#define PI 3,14159265358979
int main(){
	initwindow(500,500,"ALGO_CAK");
	int x,y,r=8;
	int ortax=getmaxx()/2,ortay=getmaxy()/2,color=4;
	float t;
	setcolor(color);
	setfillstyle(1,4);
	do{
		delay(5000);
		settextstyle(10,0,2);
		outtextxy(ortax-70,25,"I LOVE YOU");
  		setcolor(4);
  		settextstyle(3,0,2);
  		outtextxy(ortax-60,200,"seni seviyorum");

		for(t=0;t<(2*PI);t+=0.01){
			x=(r*16*sin(t)*sin(t)*sin(t))+ortax;
			y=(r*(1-2)*(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t)))+(ortay-30);
			pieslice(x,y,0,360,5);
			delay(1);
		}
		cleardevice();
		color=rand();
		setcolor(color);
		setfillstyle(2,color+1);
		
	}while(!kbhit());
	getch();
	closegraph();
	return 0;
}
