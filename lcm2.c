#include<stdio.h>

void main()
{	int a,b,c,i,k;
	printf("Enter two numbers:\t");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		c=a;
	}
	else
	{
		c=b;
	}
	for(i=0;i<c/2;i++)
	{
		k=1;
		if(a%i==0 || b%i==0)
		{
			k=k*i;
		}
	}
	printf("%d",k);
}
