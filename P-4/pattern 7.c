#include <stdio.h>

main()
{
	int i;
	int j;
	
	
	for (i=1 ; i<=5 ; i++)
	{
		for (j=0 ; j<=5 ; j++)
		{
			if(i==1 || i==3 || j==1 || i==2 && j==5)
			printf("*");
			
			else if (i==2)
			printf(" ");
		}
		printf("\n");
	}
}
