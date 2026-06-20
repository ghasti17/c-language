#include <stdio.h>

main()
{
    int i;
    int size;

    printf("enter the number of elements:");
    scanf("%d", &size);
    
    int a[size];
    int b[size];
    int sum [size];
    
    printf("\n\n First array Input \n\n");

    

    for(int i=0 ; i<size ; i++)
    {
        printf("eneter a [%d] :" , i);
        scanf("%d", &a[i]);
    }

    printf("\n\n Second array Input \n\n");

    for(int i=0 ; i<size ; i++)
    {
        printf("eneter b [%d] :" , i);
        scanf("%d", &b[i]);
    }
    
    for( int i= 0 ; i<size ; i++)
    {
        sum[i]=a[i]+b[i];

    }
    printf("\n\n sum of two array \n\n");

    for (int i=0 ; i< size ; i++)
    printf("%d\t",sum[i]);

}