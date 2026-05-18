#include<stdio.h>

main()
{
	
	int num;
	int FD;
	int LD;
	int sum;
	
	printf("enter any nym:");
	scanf("%d",&num);
	
	if(num>0)
	{
		LD=num%10;
		FD=num;
		
	}
	while(FD>=10)
	{
		FD=FD/10;
		
	}
	sum=FD+LD;
	printf("FD=%d\n",FD);
	printf("LD=%d\n",LD);
	printf("sum of FD and LD is %d",sum);  
	
	
	
	
	
	
	
	
	
	
	
	
	
}
