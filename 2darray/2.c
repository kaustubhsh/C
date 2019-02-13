#include<stdio.h>
void main()
{
	int p,i,a[5],n,m;
	for(i=0;i<5;i++)
	{
		printf("Enter number : ");
		scanf("%d",&a[i]);
	}
	n=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>n)
		{
			n=a[i];
		}
		if(a[i]<n)
		{
			m=a[i];
		}
	}
	printf("Max = %d\nMin = %d",n,m);
}
