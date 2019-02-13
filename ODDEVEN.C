/*WAP to check weather the number is even or odd*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter a numbers:");
	scanf("%d",&a);
	if (a%2)
		  printf("The given number is odd");
	else
		  printf("the given number is even");
	getch();
	
 return(0);
}
