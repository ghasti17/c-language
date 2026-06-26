#include <stdio.h>

main()
{
    char str [20];
    char *ptr =str;
    int length =0;

    printf("enter any string :");
    scanf("%[^\n]",str);

    while(*ptr !='\0')
    {
        length++;
        ptr++;

    }
    printf("The length of a string is : %d\n",length);
}