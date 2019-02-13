#include<stdio.h>

main()
{
	int n,i;
	float s=0;
	printf("Enter n:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{	s=s+1.0/i;
		i=i+1;
	}
	printf("%f\n",s);
	
}
