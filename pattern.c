#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,n;
	printf("Enter no of rows : \t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
}
