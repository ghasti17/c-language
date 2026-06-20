#include<stdio.h>

main()
{ 
   int i;
   int j;
    
    for (i=1; i<=5 ;i++)
    {
    	for(j=i; j>=1; j--)
    	{
		
      	if(j%2 == 0)
    	printf("0");
    	else 
    	printf("1");
        }
        printf("%d",j%2);
    	printf("\n");
	}
	
}
