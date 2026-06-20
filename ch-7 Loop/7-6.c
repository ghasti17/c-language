#include<stdio.h>

main()
{
	int n;
	
	printf("enter any num:");
	scanf("%d",&n);
	
	int i=1;
	int mul;
	
	while(i<=n)
	{
		mul=i*mul;
		i++;
	}
	
	printf("mul=%d",mul);
}
