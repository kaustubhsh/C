#include<stdio.h>
main()
{
	int a[500],z=0,i,j,n,x;
	printf("Enter array size:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&a[i]);
		
	}
	printf("\nEnter number to be searched:");
	scanf("%d",&x);
	z=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("%d on %d position\n",x,i+1);
			z=z+1;
		}
	}
	printf("Count is %d",z);
	
}
