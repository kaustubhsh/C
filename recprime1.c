#include<stdio.h>
void main()
{
	int i,n,c,r,n1;
	scanf("%d%d",&n,n1);
	for(i=n;i<=n1;i++)
	{
		r=n/2;
		c=prime(n,r);
		if(c==1)
		printf("%d\n",i);
	}
	
	
}
int prime(int n,int i)
{
	if(i==1)
		return 1;
	else
	{
		if(n%i==0)
			return 0;
		else
			return prime(n,i-1);
	}
}
