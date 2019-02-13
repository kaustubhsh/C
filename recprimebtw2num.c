#include<stdio.h>
#include<math.h>
int prime(int,int);
int main()
{
	int x,y,z,r,c;
	scanf("%d%d",&x,&y);
	for(z=x;z<=y;z++)
	{
		r=sqrt(z);
		c=prime(z,r);
		if(c==1)
		 	printf("%d\n",z);
		
	}
	
}
int prime(int n , int i)
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
