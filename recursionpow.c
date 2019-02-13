#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,p;
	int power(int,int);
	printf("Enter m & n");
	scanf("%d%d",&m,&n);
	p=power(m,n);
	printf("%d",p);
}
int power(int m ,int n)
{
	if(n==0)
		return 1;
	else
	return m*power(m,n-1);
}
