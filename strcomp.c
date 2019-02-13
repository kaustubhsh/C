#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j,a,b,z;
	char x[55],y[100];
	printf("Enter 2 word :\t");
	scanf("%s%s",x,y);
	// Ist method
{/*	a=strlen(x);
	b=strlen(y);
	if(a==b)
	{
		z=0;	
		for(i=0;i<a;i++)
		{
			z=0;
			if(x[i]!=y[i])
			{
				z=1;
				break;
			}
		}
		if(z==1)
		{
			printf("not equal");
		}
		else
		{
			printf("EQUAL");
		}
	}
	else
	{
		printf("length not equal");
	}
*/
}
	a=strlen(x);
	b=strlen(y);
	if(a==b)
	{
			z=0;
		for(i=0;i<a;i++)
		{
			if(x[i]==y[i])
			{
				z++;
			}
		
		}
		if(z==a)
		{
			printf("equal");
		}
		else
		{
			printf("not equal");
		}
	}
	else
		{
			printf("not equal");
		}
}
