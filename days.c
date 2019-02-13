#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if (n==1)
		printf("MONDAY");
	else if (n==2)
		printf("TUESDAY");
	else if (n==3)
		printf("WEDNESDAY");
	else if (n==4)
		printf("THURSDAY");
	else if(n==5)
		printf("FRIDAY");
	else if (n==6)
		printf("SATURDAY");
	else if(n==7)
		printf("SUNDAY");

}
