#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j,k;
	char w[55];
	printf("Enter word\t:");
	gets(w);
/* my method CHECK
	for(i=0;i<strlen(w);i++)
	{
		k=0;
		for(j=strlen(w)-1;j>=0;j--)
		{
			if(w[i]==w[j])
			{
				k=0;
				break;
			}
		}
	}
	if(k==0)
	{
		printf("pailndrome\n");
	}
	else
	{
		printf("pailndrome nahi hai");
	}
*/	//puts(w);
	j=0;
	i=strlen(w)-1;
	while(i<j)
	{
		if(w[i]!=w[j])
		{
			k=0;
			break;
		}
		i++;
		j--;
	}
	if(k==1)
	{
		printf("\npailndrome\n");
	}
	else
	{
		printf("pailndrome nahi hai");
	}
	
}
