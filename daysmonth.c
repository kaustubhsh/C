/*WAP to enter no of month and print no of days .*/
#include<stdio.h>
#include<conio.h>
main()
{
	int m;
	printf("Enter number of month:-");
	scanf("%d",&m);
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	printf("\n31 days");
	else if(m==4||m==6||m==9||m==11)
	printf("\n30 days");
	else if (m==2)
	printf("\n28 days");
	else
	printf("\ninvalid input");
		
}
