#include <stdio.h>

main()
{
    int row , col ;

    printf("enter row :");
    scanf("%d", &row);

    printf("eneter column :");
    scanf("%d", &col);

    int a [row][col];
    int b [row][col];
    int sum[row][col];

    printf("\n\n FirstArray Inputr\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");

    }
     printf("\n\n SecondArray Input \n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    int sum = 0 ;

    for( int i= 0 ; i<row ; i++)
    {
        for(int j = 0 ; j <col ; j++)
        {
          sum[row][col] += a[i][j]+b[i][j];
        }
        
        printf("\n\nArray output \n\n");

        for(int i =0 ; i<row ; i++)
        {
            for (int j=0 ; j<col ; j++)
            {
                printf("%d",sum[i][j]);
            }
        }
        printf("\n");
    }
}