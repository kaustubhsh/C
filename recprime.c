#include<stdio.h>
void main()
{
	int i,n,r;
	scanf("%d",&n);
	r=n/2;
	i=prime(n,r);
	if(i==1)
		printf("PRIME");
	else
		printf("nahi hai");
	
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
