#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j;
	char w[55];
	printf("Enter a word :\t");
	scanf("%s",w);
	printf("\n");
	for(i=strlen(w)-1;i>=0;i--)
	{
		printf("%c",w[i]);
	}
}
