/* WAP to find out average using array*/
#include<stdio.h>

main()
{
	float a[500],n=0,s=0;
	float avg;
	int i;
	printf("Enter array size:\t"); 
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d\t",i+1);
		scanf("%f",&a[i]);
		s+=a[i];
	}
	avg=(float)s/n;
	printf("AVERAGE = %.2f",avg);
}

