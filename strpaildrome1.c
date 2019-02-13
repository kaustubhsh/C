#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j,k;
	char s[100],w[55];
	printf("Enter word\t:");
	gets(w);
	for(i=0,j=strlen(w)-1;i>=0;j++,i--)
	{
		s[j]=w[i];
	}
	s[j]='\0';
	printf("%s\t%s\n",w,s);
	if(strcmp(w,s)==0) // strcmp to compare two strings using ascii code
	{
		printf("Palindrome");
	}
	else
	{
		printf("Palindrome nahi hai");
	}
	
}
