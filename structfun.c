/*STRUCUTRE*/
#include<stdio.h>
#include<conio.h>

struct std
{
	int roll,m1;
	char name[100];
	
};
void input(struct std[]);
void show(struct std[]);
void main()
{
	struct std s[50];
	input(s);
	show(s);
}
void input(struct std s[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter roll no :\t\t");
		scanf("%d",&s[i].roll);
		printf("Enter name:\t\t");
		scanf("%s",s[i].name);
		printf("Enter marks:\t\t");
		scanf("%d",&s[i].m1);
	}
}
void show(struct std s[])
{
	int i;
	for(i=0;i<5;i++)
	{
		
		printf("%d\t%s\t%d\n",s[i].roll,s[i].name,s[i].m1);
	}
}

