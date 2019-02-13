#include<stdio.h>

struct aa
{
	char name[10];// 1 byte>>>>> 10 byte for 10 character 
	int roll;/// 2 byte>>>> total 12 byte
};
int main()
{
	struct aa x;
	FILE *f;
	f=fopen("ram.txt","w");
	while(1)
	{
		printf("Enter roll number or 0 for exit ");
		scanf("%d",&x.roll);
		if(x.roll==0)
			break;
		printf("Enter name : ");
		scanf("%s",x.name);
		fwrite((&x),sizeof(x),1,f);
	}
	fclose(f);
	f=fopen("ram.txt","r");
	while(1)
	{
		fread((&x),sizeof(x),1,f);
		if(feof(f))
			break;
		printf("%d\t%s\n",x.roll,x.name);
	}
	fclose(f);
}
