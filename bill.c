#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	float a;
	printf("Enter no of calls:");
	scanf("%d",&n);
	if (n<=100)
		a=0;
	else if (n<=200)
		a=(n-100)*0.8;
	else  if (n<=500)
		a=(n-200)*1.00+80;
	else
		a=(n-500)*1.20+380;
	//a=a+100.00;
	printf("your bill is rs.%.2f",a+100.00);
	
}
