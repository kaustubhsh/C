/* WAP to create pattern */
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,n;
	printf("Enter number of rows :\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n-1;k>=i;k--)//Used to give space for 4,3,2,1,0 times
		{	
			printf(" ");
		}
		for(j=1;j<=i;j++)//used for numbering no of digits
		{
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n");
}
