#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aa
{
	
	char name[1000],add[1000],city[100],state[100];// 1 byte>>>>> 10 byte for 10 character 
	int u,n,w;/// 2 byte>>>> total 12 byte
	float a,b,c;
};
void c();
void main()
{
	FILE *f,*f1;
	int n,p[100],i,q[100];
	struct aa x;
	f=fopen("bill.txt","w");
	while(1)
	{
		printf("Enter Consumer  number or 0 for exit ");
		scanf("%d",&x.n);
		if(x.n==0)
			break;
		printf("Enter name : ");
		scanf("%s",x.name);
		printf("Enter address ");
		scanf("%s",x.add);
		printf("\nEnter city :- ");
		scanf("%s",x.city);
		printf("\nEnter state :- ");
		scanf("%s",x.state);
		fwrite((&x),sizeof(x),1,f);

	}
	fclose(f);
	f1=fopen("billcal.txt","w");
	while(1)
	{
	printf("Enter categery 1 for domestic 2 for commercial 3 for farmers or 0 for exit ");
	scanf("%d",&x.w);
	if(x.w==0)
		break;
	if(x.w==1)
		printf("Enter number of units:- ");
		scanf("%d",x.u);
		x.a=(x.u*6.54);
	else if(x.w==2)
		printf("Enter number of units:- ");
		scanf("%d",x.u);
		x.b=(x.u*15.68);
	else (x.w==3)
		printf("Enter number of units:- ");
		scanf("%d",x.u);
		x.c=(x.u*1.25);
	/*switch(x.w)
		{
			case 1:
				printf("Enter number of units:- ");
				scanf("%d",x.u);
				x.a=(x.u*6.54);
				break;
			case 2:
				printf("Enter number of units:- ");
				scanf("%d",x.u);
				x.b=(x.u*15.68);
				break;
			case 3:
				printf("Enter number of units:- ");
				scanf("%d",x.u);
				x.c=(x.u*1.25);
				break;	
		}
	*/
	fwrite((&x),sizeof(x),1,f);
	}
	fclose(f1);
	f=fopen("bill.txt","r");
	while(1)
	{
		fread((&x),sizeof(x),1,f);
		if(feof(f))
			break;
		printf("%d\t\n%s\n%s\n%s\n%s\n",x.n,x.name,x.add,x.city,x.state);
	}
	fclose(f);
	f1=fopen("billcal.txt","r");
	while(1)
	{
		fread((&x),sizeof(x),1,f1);
		if(feof(f1))
			break;
		printf("Units are %d",x.u);
		if(x.w==1)
			printf("bill is Rs. %f",x.a);
		else if(x.w==2)
			printf("bill is Rs. %f",x.b);
		else if(x.w==3)
			printf("Bill is Rs. %f",x.c);
		else
			break;
	}
	fclose(f1);
	
}
