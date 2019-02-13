#include<stdio.h>
void main()
{
	int k,i,j;
	for(i=1;i<=5;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=2;j<=6;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
}
