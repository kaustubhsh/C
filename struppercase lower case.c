#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j,k;
	char s1[55],s2[100],s3[100];
	printf("Enter a word :\t");
	//	scanf("%s",&w);
	gets(s1);
	for(i=0,j=0,k=0;i<strlen(s1);i++)
	{
		if(s1[i]>='a'&& s1[i]<='z')
		{
			s2[j]=s1[i];
			j++;
		}
		else if(s1[i]>='A'&& s1[i]<='Z')
		{
			s3[k]=s1[i];
			k++;
		}
	}
	s2[j]='\0';
	s3[k]='\0';
	printf("%s\n%s\n%s\n",s1,s2,s3);
}
