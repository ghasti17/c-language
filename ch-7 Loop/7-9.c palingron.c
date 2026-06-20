#include<stdio.h>

main()
{
	int rem ;
	int rev=0;
	int num;
	int org;
   
	
	printf("enter any num:");
	scanf("%d",&num);
	org =num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	if(org==rev)
	
		printf("%d is palindron number",org);
	else
    printf("%d is not a palindron number",org);
	

	
}   
