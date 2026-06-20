#include<stdio.h>

main()
{
    int i ;
    int size;

    printf("enter number of element:");
    scanf("%d" , & size);

    int a[size];


    printf("\n\n Array input \n\n");

    for(int i =0 ; i < size ; i++)
    {
        printf("eneter element :");
        scanf("%d",&a[i]);

    }
    printf("\n\n Array output\n\n");


    for(int i = 0 ; i< size ;i++)
    {
        printf("%d\t",a[i]);

    }
    int sum =0;
    for(int  i =0; i< size ; i++)
    {
    sum = sum + a[i];
    }
    printf("\n\n");

    printf("sum\t : %d\n",sum);
    printf("AVG   :%.2f",(float)sum/size);


    

}