
#include<stdio.h>

main()
{
	int num;
	int rem;
	int rev=0;
	int org;
	int arms;
	
	printf("enter any number :");
	scanf("%d",&num);
	
	org=arms;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	
	if(org==arms )
	printf("%d is a armstrong num",arms);
	
	else
	printf("%d is not a armstrong num",arms);
}
