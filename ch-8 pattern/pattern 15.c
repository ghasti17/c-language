#include<stdio.h>

main()
{
	char i;
	char j;
	
	
	for(i=1 ; i<=5 ; i++)
	{
		for(j=i ; j<=5 ;j++)
		{
			if (j%2==0)
			printf("%d",j);
			else
			printf("%c",j+64);
		}
		printf("\n");
	}
}
