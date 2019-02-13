#include<stdio.h>
#include<stdlib.h>

struct aa
{
	char name[10];// 1 byte>>>>> 10 byte for 10 character 
	int roll;/// 2 byte>>>> total 12 byte
};
void main()
{
	struct aa x;
	int n;
	FILE *f1,*f2;
	f1=fopen("am.txt","w");
	while(1)
	{
		printf("Enter roll number or 0 for exit ");
		scanf("%d",&x.roll);
		if(x.roll==0)
			break;
		printf("Enter name : ");
		scanf("%s",x.name);
		fwrite((&x),sizeof(x),1,f1);
	}
	fclose(f1);
	printf("Enter a roll to be deleted :-");
	scanf("%d",&n);
	f1=fopen("am.txt","r");
	f2=fopen("pm.txt","w");
	while(1)
	{
		fread((&x),sizeof(x),1,f1);
		if(feof(f1))
			break;
			if(x.roll!=n)
			{
				fwrite((&x),sizeof(x),1,f2);
			}
	}
	fclose(f1);
	fclose(f2);
	remove("am.txt");
	rename("pm.txt","am.txt");
	f1=fopen("am.txt","r");
	while(1)
	{
		fread((&x),sizeof(x),1,f1);
		if(feof(f1))
			break;
		printf("%d\t%s\n",x.roll,x.name);
	}
	fclose(f1);
}
