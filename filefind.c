#include<stdio.h>

struct aa
{
	char name[10];// 1 byte>>>>> 10 byte for 10 character 
	int roll;/// 2 byte>>>> total 12 byte
};
void main()
{
	struct aa x;
	int z=0,n;
	FILE *f;
	f=fopen("ab.txt","w");
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
	f=fopen("ab.txt","r");
	printf("Enter a number to be searched: \t");
	scanf("%d",&n);
	while(1)
	{
		fread((&x),sizeof(x),1,f);
		if(feof(f))
		{
			break;
		}
		if(x.roll==n)
		{
			z=1;
			break;
		}
	}
	if(z==1)
	{
			printf("%d\t%s\n",x.roll,x.name);
	}
	else
	{
		printf("Not found");
	}
	fclose(f);
}
