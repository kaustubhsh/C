#include<stdio.h>
#include<dos.h>
#include<graphics.h>

void main()
{
	int gd=DETECT,gm,i,x,y,j=1;
	initgraph(&gd,&gm,"c://turboc3//bgi");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
       //	outtextxy(25,240,"Press any key");
	getch();
	x=getmaxx()/2;
	y=getmaxy()/2;

	setviewport(0,0,639,440,1);
	setfillstyle(SOLID_FILL,RED);
	pieslice(x,y,0,60,120);
	setfillstyle(SOLID_FILL,BLUE);
	pieslice(x,y,60,160,120);
	setfillstyle(SOLID_FILL,YELLOW);
	pieslice(x,y,160,260,120);
	setfillstyle(SOLID_FILL,GREEN);
	pieslice(x,y,260,360,120);

	getch();
	cleardevice();

	for(i=0;i<=420;i=i+10,j++)
	{
		rectangle(50+i,275,150+i,400);
		rectangle(150+i,350,200+i,400);
		circle(75+i,410,10);
		circle(175+i,410,10);
		setcolor(j);
		delay(100);
		if(kbhit())
			break;
		if(i==420)
			break;
		clearviewport();

	};
	getch();
	closegraph();

}