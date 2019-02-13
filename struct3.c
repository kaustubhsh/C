/*STRUCUTRE*/
#include<stdio.h>
#include<conio.h>

struct std
{
	int roll,m1,m2,m3;
	char name[100];
	
};
void main()
{
	struct std s[50];
	int i,n,m[3]={0},t;
	printf("Enter no of students:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter roll no :\t\t");
		scanf("%d",&s[i].roll);
		printf("Enter name:\t\t");
		scanf("%s",s[i].name);
		printf("Enter 3 marks:\t\t");
		scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
	}
	for(i=0;i<n;i++)
	{
		
		t=s[i].m1+s[i].m2+s[i].m3;
		printf("%d\t%s\t%d\t%d\t%d\t%d\n",s[i].roll,s[i].name,s[i].m1,s[i].m2,s[i].m3);
		m[0]=m[0]+s[i].m1;
		m[1]=m[1]+s[i].m2;
		m[2]=m[3]+s[i].m3;
	}
	printf("\t");
	for(i=0;i<3;i++)
	{
		printf("\t%d",m[i]);
	}
	
}

