#include <stdio.h>

void cubeElements(int *ptr, int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            *ptr = (*ptr) * (*ptr) * (*ptr);
            ptr++;
        }
    }
}

int main()
{
    int arr[3][3];
    int i, j;

    printf("Enter array's  elements:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    cubeElements(&arr[0][0], 2, 2);

    printf("\ncube of all elements:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

}