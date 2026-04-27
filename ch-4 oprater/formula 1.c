#include<stdio.h>

main()
{
	int x,y;
	
	printf("enter your x value:");
	scanf("%d",&x);
	
	printf("enter your y value:");
	scanf("%d",&y);
	
	int ans=(x*x)+(2*x*y)+(y*y);
	
    printf("(x+y):%d",ans);
   	
}
