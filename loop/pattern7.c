#include<stdio.h>
main()
{
	int i,j,k,m,n;
	printf("Enter number of rows :\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n-1;k>=i;k--)
		{
				printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
			
		}
		for(m=i-1;m>=1;m--)
		{
			printf(" %d",m);
		}
		printf("\n");
	}
	
	
	
}

