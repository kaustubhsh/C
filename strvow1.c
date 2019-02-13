#include<stdio.h>
#include<string.h>
main()
{
	int i,j,count;
	char w[5][55];
	for(i=0;i<5;i++)
	{
		printf("Enter a word :\t");
	//	scanf("%s",&w[i]);
		gets(w[i]);
	}
	for(i=0;i<5;i++)
	{
			count=0;	
		for(j=0;j<strlen(w);j++)
		{
			if(w[i][j]=='a'||w[i][j]=='e'||w[i][j]=='i'||w[i][j]=='o'||w[i][j]=='u')
				{
					count++;
				}
		}
		printf("%s\t%d\n",w[i],count);
		
	}
}
