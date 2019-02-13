#include<stdio.h>
main()
{
	int m[10][10],i,s1=0,s2=0;j,r,c;
	printf("Enter no of rows and columns : \t");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element\t%d\t %d\t",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	// matrix output
	printf("\nORIGINAL MATRIX\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
			printf("\n");
	}
	/*ROW and column sum in one*/
	for(i=0;i<r;i++)
	{
		s1=0;
		s2=0;
		for(j=0;j<c;j++)
		{
			s1=s1+m[i][j];
			s2=s2+m[j][i];
		}
		m[i][c]=s1;
		m[r][i]=s2
	}
	for(i=0;i<r+1;++i)
	{
		for(j=0;j<c+1;++j)
		{
			printf("%d%d\t",s1,s2);
		}
	}

	}
}
