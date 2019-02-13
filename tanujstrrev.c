#include<stdio.h>
#include<string.h>

main()
{	int i,j,k;
	char w[55],s[100];
	printf("Enter word\t:");
	gets(w);
	for(i=strlen(w);i>=0;i--)
	{
		printf("%c",w[i]);
	}
}
