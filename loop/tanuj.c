#include<stdio.h>
void main()
{
	int i,j,x;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
			printf(" ");
		for(x=5;x>=1;x--)
			printf("%d",x);
		printf("\n");
	}
}
