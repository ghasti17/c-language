#include<stdio.h>

main()
{
    int i ;
    int size;

    printf("enter number of element:");
    scanf("%d" , & size);

    int a[size];

    int arr[size];

    printf("%d eneter the elements :\n",size);
    for(int i=0 ; i<size ;i++)
    {
        printf("elemnts %d :",i+1);
        scanf("%d",&arr[i]);
    }
 
    printf("negative elements from array:");

    int neg =0;
    for(int i =0 ; i<size ;i++)
    {
        if(arr[i]<0)
        {
            printf("%d",arr[i]);
            neg++;
        }
        printf("\n");
    }
}    