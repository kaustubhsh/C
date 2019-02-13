#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f;
	int(fact(int));
	printf("Enter no for factorial\n");
	scanf("%d",&n);
	f=fact(n);
	printf("fact is %d",f);
	
}
int fact (int n)
{
	if(n==0)
		return 1;
	else
	return n*fact(n-1);
}
