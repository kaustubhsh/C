#include<stdio.h>
main()
{
	int m[10][10],i,j,r,c;
	printf("Enter no of rows and columns : \t");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element%d %d",i+1,j+1);
			scanf("%d",m[i][j]);
		}
	}
	printf("ORIGINAL MATRIX");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
			printf("\n");
		}
	}
}
