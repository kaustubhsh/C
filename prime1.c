#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int n,z=0,a=0,b=0,i,j,k=0,c=0,q=0;
	printf("Enter a number\t:");
	scanf("%d",&n);
	k=n;
	q=n;
	c=n;
	while(1)
	{
		z=0;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				z=1;
				break;
			}
		}
		if(z==0)
		{
			break;
		}
		n++;
		a++;
	}
	printf("%d %d",a,n);
	printf("\n\n\n\n");
	while(1)
	{
		z=0;
		for(i=k;i>=2;i--)
		{
			if(k%i==0)
			{
				z=1;
				break;
			}
		}
		if(z==0)
		{
			break;
		}
		k--;
		b++;
	}
	if(a>=b)
	{
		printf("%d\t%d\t\n",q,a);
	}
	else
	{ 
		printf("%d\t\t\n",c);
	}
	
}

