/* LCM*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,i,p;
	printf("Enter two numbers:\t");
	scanf("%d%d",&a,&b);
	c=a*b;
	for(i=c;i>=1;i--)
	{
		if(i%a==0 && i%b==0)
		{
			p=i;
		}
	}
	printf("LCM is %d",p);
}

	// HCF
	/*if(a<b)
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
	
	*/
