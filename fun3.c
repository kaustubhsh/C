#include<stdio.h>
#include<conio.h>

void si();
void main()
{
	si();
}
void si()
{
	int p,r,t,i;
	printf("ENTER principle amount,rate of interst , time period :");
	scanf("%d%d%d",&p,&r,&t);
	i=p*r*t/100;
	printf("\nSimple Intrest = %d",i);
}

