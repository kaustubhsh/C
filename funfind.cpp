#include<stdio.h>
#include<conio.h>

void input(int[]);
int find(int,int[]);
void main()
{
	int a[5],i,n,x;
	input(a);
	printf("Enter a number to be searched:");
	scanf("%d",&n);
	x=find(a,x);
	
}
void input(int arr[])
{
	int i;
	for(i=0;i<5;i++)
	{
		print("Enter a number :");
		scanf("%d",&arr[]);
	}
}
void find(int arr[],int n)
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
