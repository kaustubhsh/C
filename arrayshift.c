/* WAP to shift a number by one place  .*/
#include<stdio.h>
main()
{
	int a[500],i=0,n,x=0,z=0,t;
	printf("Enter array size:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d.Enter a number:\t",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n	Before change \n ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	z=a[0];

	for(i=0;i<n;i++)
	{
		a[i]=a[i+1];

	}
	a[n-1]=z;
	printf("\n	After change\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
