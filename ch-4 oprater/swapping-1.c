#include<stdio.h>

main()
{
	
	int a ,b,c;
	
	printf("enter your value:");
	scanf("%d",&a);
	
	printf("enter your value:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("a:%d",a);
	printf("b:%d",b);
	printf("c:%d",c);
}
