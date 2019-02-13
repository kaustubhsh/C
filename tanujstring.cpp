#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j,k;
	char w[555];
	gets(w);
	for(j=0;w[j]!=null;j++);
	for(i=j-1;i>=0;i--)
	{
		printf("%c",w[i]);
	
	}
}
