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
		for(j=5;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
