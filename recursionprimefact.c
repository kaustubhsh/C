#include<stdio.h>
void prime(int,int);
int main()
{
	int x,y;
	scanf("%d",&x);
	prime(x,2);
	return 0;
}
void prime(int n , int i)
{
	if(n!=1)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
			n=n/i;
		}
		else
			i++;	
	}
	prime(n,i);
}
