#include<stdio.h>
main()
{
	int m[10][10],i,s1=0,s=0,j,r,c;
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
	/*UPPER MATRIX SUM
	*/
	s=0;
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			if(i<=j)
				s=s+m[i][j];
		}
		printf("\n");
	}
	printf("UPPER SUM = %d \n",s);
	/*Lower matrix sum */
	s1=0;
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			if(i>=j)
				s1=s1+m[i][j];
		}
		printf("\n");
	}
	printf("LOWER SUM = %d \n",s1);

}
