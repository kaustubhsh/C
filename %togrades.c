/*wap to convet % into grade*/
#include<stdio.h>
#include<conio.h>
main()
{
	float p;
	char g;
	printf("Enter Percentage:");
	scanf("%f",&p);
	if(p>=90)
		g='A';
	else if(p>=70)
		g='B';
	else if(p>=50)
		g='C';
	else
		g='F';
	printf("Grade=%c",g);
		
}
