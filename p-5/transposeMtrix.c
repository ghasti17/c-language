#include <stdio.h>

main()
{
    int i , j ;
    int size ;

    printf("enter the array's row & col size :");
    scanf("%d",&size);

    int a[size][size];

    printf("enter array's elemnts :\n");

    for(int i =0 ; i<size ; i++)
    {
        for(int j =0 ; j<size ; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nOutput\n");

    printf("The transpose matrix of array :\n\n");

    for(int i=0 ;i<size ; i++)
    {
        for(int j =0 ; j<size ;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
}