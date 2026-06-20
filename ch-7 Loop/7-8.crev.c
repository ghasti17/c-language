#include<stdio.h>

main()
{
	int rem;
	int rev=0;
	int num;
	
	printf("enter any num:");
	scanf("%d",&num);
	
	
	 
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	
	printf("revers:%d",rev);
}
