#include<stdio.h>
int product(int,int);
int main()
{
	int a,b,c,res;
	scanf("%d%d",&a,&b);
	res=product(a,b);
	printf("%d",res);
	return 0;	

}
int product(int a,int b)
{
	if(b==0)
	{
		return 0;
	}
	else 
	{
		return (a+product(a,b-1));
	}
} 
