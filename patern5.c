#include<stdio.h>
void main()
{
	int i,j,k,a;
	for(i=1;i<=5;i++)
	{
		for(j=1,a=5;j<=i;a--,j++)
		{
			if(j==1)
				k=i;
			else
				k=k+a;
				printf("%d",k);
		}
		printf("\n");
	}
}
