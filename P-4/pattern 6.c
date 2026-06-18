#include <stdio.h>

main()
{
	int i ;
	int j ;
	int s ;
	
	for (i=5 ; i>=1 ; i--)
	{
		for(s=5 ; s>i ; s--)
		{
	       printf(" ");		
		}
		for (j=1 ; j<=i ; j++)
		{
			if(i%2==0)
			printf("1");
			
			
			else
			printf("0");
			
		}
		printf("\n");
	}
}
