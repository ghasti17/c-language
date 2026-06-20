#include<stdio.h>

main()
{
	int n;
	
	printf("enter any num:");
	scanf("%d",&n);
	
	int sum=0 ;
	int i=1;
	
	while(i<=n)
	{
		sum=i+sum;
      	i++;
	
	}
	
	printf("sum:%d",sum);

}
