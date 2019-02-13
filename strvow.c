#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j;
	char w[55];
	printf("Enter a word :\t");
	scanf("%s",&w);
	for(i=0;i<strlen(w);i++)
	{
		if(w[i]=='a'||w[i]=='e'||w[i]=='o'||w[i]=='u')
		{
			printf("%c on %d position \n",w[i],i+1);
		}
	}
}

