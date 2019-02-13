/*WAP to check the entered character is vowel or consonent*/
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	switch(ch)
	{
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
		printf("It is a vowel");
		break;
	default:
		printf("It is a consonent");

	}
	
}
