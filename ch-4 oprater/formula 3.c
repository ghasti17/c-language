#include<stdio.h>

main()
{
	int x,y;
	
	printf("enter your x value:");
	scanf("%d",&x);
	
	printf("enter your y value:");
	scanf("%d",&y);
	
	int ans=(x*x)+(3*x*x*y)+(3*x*y*y)+(y*y);
	
	printf("(x+y)3:%.2d",ans);
	
	
	
	
	
}
