#include<stdio.h>

struct aa
{
	char name[10];
	int a;
};
int main()
{
	struct aa x;
	FILE *f1;
	f1=fopen("aa.txt","w");
	while(1)
	{
		printf("Enter roll no or 0 for exit: ");
		scanf("%d",&x.a);
		if(x.a==0)
			break;
		printf("Enter name: ");
		scanf("%s",x.name);
		fwrite((&x),sizeof(x),1,f1);	
	}
	fclose(f1);
	f1=fopen("aa.txt","r");
	while(1)
	{
		fread((&x),sizeof(x),1,f1);
		if(feof(f1))
			break;
		printf("%d\t%s\n",x.a,x.name);
	}
	fclose(f1);
	return 0;
}
