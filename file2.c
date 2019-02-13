#include<stdio.h>

void main()
{
	FILE *f1;
	char c;
	printf("Enter any data :-");
	f1=fopen("ks.txt","w");
	while((c=getchar())!=EOF)
	putc(c,f1);
	fclose(f1);
	printf("The file data is:");
	f1=fopen("ks.txt","r");
	while((c=getc(f1))!=EOF)
	printf("%c",c);
	fclose(f1);

}

