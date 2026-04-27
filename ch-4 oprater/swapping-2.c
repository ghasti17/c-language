#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter your value:");
	scanf("%d",&a);
	
	printf("enter your value:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a:%d",a);
	printf("b:%d",b);
	printf("a:%d",a);
	
	
}
