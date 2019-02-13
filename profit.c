/*wap to calculate profit */
#include<stdio.h>
#include<conio.h>
main()
{
	float cp,sp;
	printf("Enter CP SP:");
	scanf("%f %f",&cp,&sp);
	if(sp>cp)
	printf("Profit is Rs.%.2f",sp-cp);
	else if(cp>sp)
	printf("Loss is Rs.%.2f",cp-sp);
	else
	printf("NO LOSS NO PROFIT");
}
