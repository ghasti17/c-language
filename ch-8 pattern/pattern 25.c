#include <stdio.h>

main()
{
	int i;
	int j;
	int s;
	
	for (i=5 ; i>=1 ; i--)
	{
		for (j=5 ; j>=i ; j--)
		{
			printf("%d",j);
		}
		for (s=1 ; s<i ; s++)
		{ 
		printf("  ");
		}
		for(j=i ; j<=5 ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
