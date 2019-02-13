#include<conio.h>
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		{	printf("It's a vowel'");
			break;}
		default :
			printf("It's a consonent");
	}
}
