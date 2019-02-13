#include<stdio.h>
#include<conio.h>

void input(int[]);
int find(int[],int);
void main()
{
	int a[5],i,n,x;
	input(a);
	printf("Enter a number to be searched:");
	scanf("%d",&n);
	x=find(a,n);
	if(x==1)
	{
		printf("FOUND");
	}
	else
	{
		printf("Not found");
	}
}
void input(int arr[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter a number :");
		scanf("%d",&arr[i]);
	}
}
int find(int arr[],int n)
{
	int i,z=0;
	for(i=0;i<5;i++)
	{
		if(arr[i]==n)
		{
			z=1;
			break;
		}
	}
	return z;
}
