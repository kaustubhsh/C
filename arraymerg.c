#include<stdio.h>

void main()
{
	int a[100],c[100],b[100],i,j,k,m,n;
	printf("Enter  m & n");
	scanf("%d%d",&m,&n);\
	for(i=0,j=0;i<n,j<m;i++,j++)
	{
		printf("Enter num\t");
		scanf("%d",&a[i]);
		printf("Enter number \t");
		scanf("%d",&b[j]);
	}
	i=0;j=0;k=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else if(a[i]>b[j])
		{
			c[k]=b[j];
			j++;
			k++;
		}
		else
		{
			c[k]=a[i];
			i++;
			j++;
			k++;
		}
	}
	while(i<m)
	{
		c[k]=a[i];
		i++;
		k++;
		
	}
	while(j<n)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	k=0;
	while(k<m || k<n)
	{
		printf("%d\n",c[k]);
		k++;
	}
}
