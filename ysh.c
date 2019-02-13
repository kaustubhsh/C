#include<stdio.h>
#include<string.h>

main()
{	int i,j,k;
	char c[555],a[100],b[100];
	printf("Enter string\t:");
	gets(a);
	gets(b);
	
/*	for(i=0;i<strlen(a);i++)
	{
		c[i]=a[i];
	}
	c[i]=' ';
	i++;
	for(j=0;j<strlen(b);j++)
	{
		c[j+i]=b[j];
	}
*/	
	c[0]='\0';
	
	strcat(c,a);
	strcat(c," ");
	strcat(c,b);
	puts(c);
} 
