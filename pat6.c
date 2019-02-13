#include<stdio.h>
void main()
{
	int i,k,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<=n/2)
		{
			for(j=1;j<=i;j++)
			{
			printf("*");
			}
		}
		else
		{
			for(k=n;k>=i;k--)
				printf("*");
		}
		printf("\n");
	}
}
