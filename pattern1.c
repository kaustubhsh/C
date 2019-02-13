#include<stdio.h>
void main()
{
	int i,j,x,k,n;
	printf("Enter no of rows : \t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			printf(" ");
		}
		for(k=i;k<=2*i-1;k++)
		{
			printf("%d",k);
		}
		for(x=2*(i-1);x>=i;x--)
		{
			printf("%d",x);
		}
		printf("\n");
	}
}
