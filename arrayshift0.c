#include<stdio.h>
main()
{
	int a[500],i=0,n,x=0,z=0,j;
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
	for(i=0,j=n-1;i<j;i++,j--)
	{
		z=a[i];
		a[i]=a[j];
		a[j]=z;
	}
	printf("\nAfter change\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		
	}
}
