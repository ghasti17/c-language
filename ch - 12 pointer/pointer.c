#include<stdio.h>

void main()
{
    int num =45;
    int *ptr;

    ptr=&num;

    printf("Num : %d\n",num);

    printf("Pointer :%u\n", *ptr);

    num=567;

    printf("Num :%d\n",num);

    printf("Pointer :%u\n",*ptr);

}