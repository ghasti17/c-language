#include <stdio.h>

main()
{
    int i,n;
    int fact = 0;

    printf("enter any num :");
    scanf("%d", &i);


    for(i=0 ; i<=n ;i++)
    {
        fact =i*i;
        i++;
    }
    printf("The factorial nub is %d",fact);
}