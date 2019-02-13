#include<stdio.h>
#include<string.h>
#define null 0
main()
{
	int i,j,k;
	char w[55];
	printf("Enter word\t:");
	gets(w);
	for(i=0;i<strlen(w);i++)
	{
		if(w[i]==32)	// 32= ASCII of space
		{
			i++;
			while(w[i]==32)
			{
				if(w[i]==32)
				{
					for(j=i;j<strlen(w);j++)
					{
						w[j]=w[j+1];
					}
				}
			}
		}
	}
	printf("%s",w);
}

