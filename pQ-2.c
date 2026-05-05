#include<stdio.h>

main()
{
	int BS;
	float hra,da,ta;
	
	printf("enter your BS:");
	scanf("%d",&BS);
	
	printf("enter your hra:");
	scanf("%f",&hra);
	
	printf("enter your da:");
	scanf("%f",&da);
	
	printf("enter your ta:");
	scanf("%f",&ta);
	
	hra=BS*hra/100;
	ta=BS*ta/100;
	da=BS*da/100;
	
	int GS=BS+hra+ta+da;
	
	printf("gross salary is %d",GS);
	
	
	
}
