#include <stdio.h>

main()
{
    int row, col;

    printf("enter row :");
    scanf("%d", &row);

    printf("eneter column :");
    scanf("%d", &col);

    int a[row][col];

    printf("\n\n Array Inputr\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

         printf("\n\n Array Output \n\n");

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            
            sum += a[i][j];
        }
    }
    printf("sum : %d\n", sum);
    printf("AVG : %.2f",(float)sum/row);
}