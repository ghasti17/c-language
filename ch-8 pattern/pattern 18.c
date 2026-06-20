#include <stdio.h>

main()
{
	int i;
	int j;
	
	
	for (i=1 ; i<=5 ; i++)
	{
		for (j=i ; j<=5 ; j++)
		{
			if(i%2==0)
			{
				(j%2==0)?printf("%d",j)
				        :printf("%c",j+64);
			}
			else
			(j%2==0)?printf("%c",j+96)
			        :printf("%c",j+64);
		
			
		}
		printf("\n");
	}
}
