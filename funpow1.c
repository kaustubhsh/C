#include<stdio.h>
#include<conio.h>

int powe(int,int);
void main()
{
	int z,m,n;
	printf("Enter m&n:");
	scanf("%d %d",&m,&n);
	z=powe(m,n);
	printf("%d",z);
}
int powe(int m,int n)
{
	
	int p=1,i;
	for(i=1;i<=n;i++)
	{
		p=p*m;
	}
	return p;
}
