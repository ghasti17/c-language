#include<stdio.h>

main()
{
	char i;
	char j;
	
	for(i=1 ; i<=5 ; i++) 
	{
		for(j=i ; j<=5 ;j++)
		{
			if(i%2==0)
			printf("%d",j);
			
			else
			
			if(j%2==0)
			printf("%c",j+95);
		
		    else 
			printf("%c",j+66);
		}
		printf("\n");
	}
}
