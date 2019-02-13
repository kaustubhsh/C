#include<stdio.h>

void main()
{
	FILE *f1;
	int i,num;
	printf("Enter 5 numbers :\n");
	f1=fopen("a.txt","w");
	for(i=1;i<=5;i++)
	{
		printf("%d . Enter number : ",i);
		scanf("%d",&num);
		putw(num,f1);// In case of numbers we use putw instead of puts
	}
	fclose(f1);
	printf("File content : \n");
	f1=fopen("a.txt","r");
	while((num=getw(f1))!=EOF)// In case of numbers we use getw instead of gets
	printf("%d\n",num);
	fclose(f1);
}
