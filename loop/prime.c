#include<stdio.h>
void main()
{
	int i,j,k,n,f=1;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			f++;
	}
	if(f==2)
		printf("PRIME");
	else
		printf("Not prime");
}
