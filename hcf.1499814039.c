/* HCF*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,i,p;
	clrscr();
	printf("Enter two numbers:\t");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		c=a;
	}
	else
	{
		c=b;
	}
	for(i=0;i<c;i++)
	{
		if(a%i==0 && b%i==0)
			{
				p=i;
			}
		}
	printf("HCF is %d",p);
	getech();
	
}
