#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j,k;
	char w[55],s[100];
	printf("Enter word\t:");
	gets(w);
/*	for(i=0;i<strlen(w);i++)
	{
		s[i]=w[i];
		
	}
	s[i]='\0';
*/	
	strcpy(s,w);
	printf("%s\n%s",w,s);
}
