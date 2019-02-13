#include<graphics.h>
#include<stdio.h>
int main()
{
	int gd=DETECT,gm,i;
	int tgraph(&gd,&gm);
	for(i=1;i<=5;i++)
	{
		setcolor(WHITE);
		circle(100*i;100,50);
		delay(2000);
		setcolor(YELLOW);
		circle(100*i,100,50);
	}
	closegraph();
	return 0;
}
