#include<stdio.h>
int main()
{
	int i,j,k=0;

	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			if(i==2 && j==1)
			{
				k+=3;
				continue;
			}
			k=k+2;
		}
		k=k-2;
		printf("\n");
	}
	return 0;
}
