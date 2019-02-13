/*STRUCUTRE*/
#include<stdio.h>
#include<conio.h>

struct std
{
	int roll,m1;
	char name[100];
	
};
void main()
{
	struct std s[50];
	int i,n;
	printf("Enter no of students:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter roll no :\t\t");
		scanf("%d",&s[i].roll);
		printf("Enter name:\t\t");
		scanf("%s",s[i].name);
		printf("Enter marks:\t\t");
		scanf("%d",&s[i].m1);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\n",s[i].roll,s[i].name,s[i].m1);
	}
}
