#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j;
	char w[55];
	printf("Enter a word :\t");
	scanf("%s",&w);
	printf("\nthe word is %s\t",w);
	printf("\nIst METHOD\n");
	for(i=0;i<strlen(w);i++)
	{
		printf("%c",w[i]);
	}
	printf("\n");
	printf("\nIInd  METHOD\n");
	for(j=0;w[j]!=null;j++)
	{
		printf("%c\t",w[j]);
	}
}
