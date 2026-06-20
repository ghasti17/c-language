#include <stdio.h>

main()
{
    int row, col;

    printf("enter your row :");
    scanf("%d", &row);

    printf("enter your col :");
    scanf("%d", &col);

    int a[row][col];
    printf("\nEnter array's elemnts \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] =", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int trarow;
    printf("\nOutput\n");

    printf("enter row num :");
    scanf("%d", &trarow);

    printf("elements of row %d \n", trarow);

    int rowsum = 0;
    for (int j = 0; j < col; j++)
    {
        printf("%d\t", a[trarow][j]);
         rowsum += a[trarow][j];
    }
     printf("\nThe sum of a row %d :%d\n", trarow, rowsum);

    int tracol = 0;
    printf("\nOutput\n");

    printf("enter col num :");
    scanf("%d", &tracol);

   
    printf("elements of col %d \n", tracol);

    int colsum = 0;
    for (int j = 0; j < col; j++)
    {
        printf("%d\t", a[j][tracol]);
       
            colsum += a[tracol][j];        
    }

    printf("\nThe sum of a row %d :%d\n", tracol, colsum);
}
