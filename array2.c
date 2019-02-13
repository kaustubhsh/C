/*WAP to calculate sum and count using array  */
#include<stdio.h>
main()
{
	int a[5],i,n,s=0,c;
	printf("Enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a number:\t");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		s=s+a[i];
		c++;
	}
	printf("sum = %d & count = %d",s,c);
}
