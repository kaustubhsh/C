/* WAP to output max of the given numbers with position*/
#include<stdio.h>
main()
{
	int a[500],i,n,x=0,p=0;
	printf("Enter array size:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a number:\t");
		scanf("%d",&a[i]);
	}
	x=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>x)
		{
			x=a[i];
			p=i;
		}
	}
	printf("%d\n%d\n",x,p+1);
}

