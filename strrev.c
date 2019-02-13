#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j;
	char w[55]={0};
	printf("Enter a word :\t");
	scanf("%s",&w);
	printf("\n");
	for(j=0;w[j]!=null;j++)
	{	for(i=j-1;i>=0;i--)
		{
			printf("%c",w[i]);
		}
	}
}
