#include<stdio.h>
void main()
{
	int a[5],i,s=0;
	for(i=0;i<=5;i++)
	{
		printf("Enter a number");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{
		printf("%d\n",a[i]);
		s=s+a[i];
	}
	printf("Sum is %d",s);
}
