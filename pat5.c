#include<stdio.h>
void main()
{
	int i,j,k=1,n;
	printf("Enter no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1||j==i||i==n)
				printf(" * ");
			else
			{	
				printf(" %d ",k);
				k++;
			}
			
		}
		
		printf("\n");
	}

}
