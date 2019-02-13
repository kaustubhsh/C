/*WAP to input number and check that it is given in the input */
#include<stdio.h>
main()
{
	int a[500],i=0,n,x=0,z=0;
	printf("Enter array size:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d. Enter a number:\t",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter a number to be searched :  ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			z=1;
			break;
		}
	}
	if(z==1)
	{
		printf("Found at number %d",i+1);
	}
	else
	{
		printf("not found");
	}
}
