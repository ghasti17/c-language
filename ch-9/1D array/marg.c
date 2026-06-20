#include <stdio.h>

main()
{
    int i;
    int size1 ;
    int size2 ;


    printf("enter the number of elements:");
    scanf("%d",&size1);

    printf("enter the number of elements:");
    scanf("%d",&size2);

    int a [size1];
    int b[size2];
    int marg[size1+size2];


    printf("\n\n first array input \n\n");

     for(int i=0 ; i<size1 ; i++)
    {
        printf("eneter a[%d] :" ,size1);
        scanf("%d", &a[size1]);
    }

    printf("\n\n second array input \n\n");

     for(int i=0 ; i<size2 ; i++)
    {
        printf("eneter b[%d] :" , size2);
        scanf("%d", &b[size2]);

    }
    for(int i =0 ; i< size1 ; i++)

    marg [i]=a[i];

    for(int i =0 ; i < size2; i++)

    marg[i+size1]=b[i];

    printf("\n\n");
    printf("marg\t : %d\n",marg);


}