#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	printf("Enter no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();

}
