#include<stdio.h>

main()
{
	float p;
	float r;
	float t ;
	 
	printf("enter your principal:"); 
	scanf("%f",&p);
	printf("enter your rate:"); 
	scanf("%f",&r); 
	printf("enter your time :"); 
	scanf("%f",&t); 
	 
	printf("interest :%.2f\n",p*r*t/100); 
	
}
