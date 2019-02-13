#include<stdio.h>

void main()
{
	FILE *f1,*f2;
	char c,z;
	printf("Enter any data :-");
	f1=fopen("ks.txt","w");
	while((c=getchar())!=EOF)
	putc(c,f1);
	fclose(f1);
	f1=fopen("ks.txt","r");
	f2=fopen("kx.txt","w");
	while((c=getc(f1))!=EOF)
	{
		putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
	f1=fopen("ks.txt","r");
	f2=fopen("kx.txt","r");
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

