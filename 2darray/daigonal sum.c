#include<stdio.h>
main()
{
	int m[10][10],i,s=0,j,r,c;
	printf("Enter no of rows and columns : \t");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element\t%d\t %d\t",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	// matrix output
	printf("\nORIGINAL MATRIX\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
			printf("\n");
	}
	// Diagonal sum
		printf("diagonal sum\n");
	for(i=0;i<r;i++)
	{
		s=0;
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
			s=s+m[j][j];
		}
		printf("\n");
	}
		printf("SUM = %d\n",s);

}
