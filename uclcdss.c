/*WAP to check uppercase , lowercase, digit , special symbol*/
#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf("Enter a character:\t");
	scanf("%c", &ch);
	if(ch>=97 && ch<=122)
		printf("Lowercase character");
	else if (ch>=65 && ch<=90)
		printf("Uppercase character");
	else if (ch>=48 && ch<=57)
		printf("it's a digit'");
	else 
		printf("Special Symbol");
		
}
