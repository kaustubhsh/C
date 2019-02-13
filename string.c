#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j;
	char w[55];
	printf("Enter a word :\t");
	gets(w);
//	scanf("%s",w);
	printf("\nthe word is %s\t",w);
	printf("\nIst METHOD\n");
	for(i=0;i<strlen(w);i++)
	{
		printf("%c",w[i]);
	}
	printf("\n");
	printf("\nIInd  METHOD\n");
	for(i=0;w[i]!=null;i++)
	{
		printf("%c\t",w[i]);
	}
}
