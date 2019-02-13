#include<stdio.h>
#include<string.h>

main()
{	int i,j,k;
	char w[55],s[100];
	printf("Enter word\t:");
	gets(w);
	
	/* 
	for(i=0;i<strlen(w);i++)
	{
		printf("%s",w);
	}
	for(j=strlen(w)-1;j>=0;j--)
	{
		s[i]=w[i];
	}
	printf("%s\n\n\n\t",s);
	for(i=0;i<strlen(w);i++)
	{
		printf("%s",w);
	}
	for(j=strlen(w)-1;j>=0;j--)
	{
		s[i]=w[j];
	}
	*/
	for(i=strlen(w),j=0;i>=0;i--,j++)
	{
		w[j]=s[i];
	}
	s[i]='\0';
	printf("\n%s\n",s);

}
