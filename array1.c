#include<stdio.h>
main()
{
	int a[500],i,n,x;
	printf("Enter array size:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a number:\t");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\n",i+1,a[i]);
	}
}
