#include<stdio.h>
#include<conio.h>

void input(int[]);
void show(int[]);
void main()
{
	int a[5],i;
	input(a);
	show(a);
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
void show(int arr[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d\n",arr[i]);
	}
}
