#include<stdio.h>
#include<string.h>

main()
{
	int i,j,x,k=0,f;
	printf("Enter a number\t:");
	scanf("%d",&x);
	if(x%(x/2)==0)
	{
		k=x;
	}
	else
	{
		while(1)
		{
			if(x%(x/2)!=0)
			{
				f=k;
			}
		}
	}
	printf("%d %d",k,f);
}
