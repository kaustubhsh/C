/* WAP to check that the given character is a vowel or consonent*/
#include<conio.h>
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	if (ch=='a' || ch=='e' || ch=='i'  ||ch=='o'||ch=='u' )
		printf("It's a vowel'");
	else
		printf("It's a consonent");
}
