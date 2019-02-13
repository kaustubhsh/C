#include<stdio.h>
#include<conio.h>

void pow(int,int);
void main()
{
	int m,n;
	printf("Enter m&n:");
	scanf("%d %d",&m,&n);
	pow(m,n);

}
void pow(int m,int n)
{
	
	int p=1,i;
	for(i=1;i<=n;i++)
	{
		p=p*m;
		printf("%d\t* %d\t= %d\n",m,i,p);
	}
}
