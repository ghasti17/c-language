#include<stdio.h>

main()
{
	int i;
	int j;
	int s;
	
	for (i=1 ; i<=5 ;i++)
	{
		for(j=i ; j<=5 ; j++)
		{
			printf("%d",j);
		}
		for (s=1 ; s<i ; s++)
		{ 
		printf("  ");
		}
		for(j=5 ; j>=i ; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
