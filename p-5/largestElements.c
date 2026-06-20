#include <stdio.h>

main()
{
    int i;
    int j;
    int row;
    int col;

    printf("enter the row :");
    scanf("%d", &row);

    printf("enter the col :");
    scanf("%d", &col);

    int a[row][col];

    printf("\n array input \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("\noutput\n");

    printf("the largest elements is :%d\n", max);
}