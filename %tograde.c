#include<stdio.h>
#include<conio.h>
main()
{
	char grade;
	float p;
	printf("Enter Percentage:");
	scanf("%f",&p);
	if(p>=90)
	grade='A';
	else
	{ if(p>=70)
		grade='B';
		else
		{if(p>=50)
			grade='C';
		 else
			grade='F';
		}
	}
	printf("Grade=%c",grade);
}
