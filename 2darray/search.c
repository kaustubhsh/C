#include<stdio.h>
main()
{
	int m[10][10],k,r,i,j,c,count;
	printf("Enter number of rows and columns\t :");
	scanf("%d %d",&r,&c);
	//matrix input
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;++j)
		{
			printf("Enter Element %d\t %d\t",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	printf("\nORIGINAL matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d\t",m[i][j]);
		}
			printf("\n");
	}
	/*Enter a number to be searched*/
	printf("\nEnter a number to be searched\t");
	scanf("%d",&k);
	for(i=0;i<r;i++)
	{
		count=0;
		for(j=0;j<c;j++)
		{
			if(m[i][j]==k)
			{
				count++;
			}	
		printf("%d\t",m[i][j]);
		}
		printf("count = %d\t",count);
		printf("\n");
	}
}
