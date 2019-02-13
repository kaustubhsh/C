/* Matrix multiplication */
#include<stdio.h>
#include<stdlib.h>
#define row 3
#define col 3
int main()
{
	int m1[row][col],m2[row][col],m3[row][col];
	int r1,c1,r2,r3,c2,c3,i,j,k;
	printf("Enter number of rows and columns in matrix 1\t");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter number of rows and columns in matrix 2\t");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("\nINVALID Dimensions .");
		exit(1);
	}
	// 1st matrix input
	printf("Input matrix 1\n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		{
			printf("Enter element %d\t%d\t",i+1,j+1);\
			scanf("%d",&m1[i][j]);
		}
	// 2nd matrix input	
	printf("Input matrix 2\n");
	for(i=0;i<r2;i++)
	{	
		for(j=0;j<c2;j++)
		{
			printf("Enter element %d\t%d\t",i+1,j+1);\
			scanf("%d",&m2[i][j]);
		}
	}
	// MULTIPLY
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
				m3[i][j]=0;
			for(k=0;k<c1;k++)
			{
				m3[i][j]+=m1[j][k]*m2[k][i];
			}
		}
	}
	//output
	printf("Multiplication of matrix 1 & 2 is :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
			printf("%d\t",m3[i][j]);
			printf("\n");
	}
	return'0';
}
