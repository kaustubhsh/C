/*wap to input number and check the frequency of that number*/
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
			printf("%d on position %d\n",x,i+1);
			z++;
		}
	}
	printf(" Count is %d",z);
}
