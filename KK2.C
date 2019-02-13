#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k=1,c=65;
	clrscr();
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(i==2 || i==4 || i==6)
			{
				printf("%c ",c++);
				continue;
			}
			printf("%d ",k++);
		}
		printf("\n");
	}
	getch();
}
