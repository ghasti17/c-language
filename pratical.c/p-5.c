#include <stdio.h>

main()
{

    int i,s,j;
    int row ;

    for(i=1 ; i<=row; i++)
    {
        for(s=1;s<i;s++)
        {
            printf(" ");
        }
        
        for(j=1 ; j<=i; j++)
        {
          printf("*");
        }
    }
    printf("\n");
}