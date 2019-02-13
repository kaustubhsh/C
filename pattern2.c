#include<stdio.h>
void main()
{
	int i,j,x;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(x=1;x<=(2*i-1);x++)
		{
			printf("*");
		}
		printf("\n");
	}
}
