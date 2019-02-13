#include<stdio.h>

void main()
{
	FILE *f1,*f2;
	char c,z;
	printf("Enter any data :-");
	f1=fopen("k.txt","w");
	while((c=getchar())!=EOF)
	putc(c,f1);
	fclose(f1);
	f1=fopen("k.txt","r");
	f2=fopen("a.txt","w");
	while((c=getc(f1))!=EOF)
	{
		if(isupper(c))
		{
			c=tolower(c);
		}
		else
		{
			c=toupper(c);
		}
		putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
	f1=fopen("k.txt","r");
	f2=fopen("a.txt","r");
	printf("The first file data is:\n");
	while((c=getc(f1))!=EOF)
	{
		printf("%c",c);
	}
	printf("The second file data is:\n");
	while((c=getc(f2))!=EOF)
	{
		printf("%c",c);
	}
	fclose(f1);
	fclose(f2);

	
}

