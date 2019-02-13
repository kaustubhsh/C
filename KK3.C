#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k=1,c=65;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(i==4 || i==2)
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
