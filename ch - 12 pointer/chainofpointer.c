#include <stdio.h>

main()
{
    int a = 10;


    int *b;
    int **c;
    int ***d;

    b= &a;
    c= &b;
    d= &c;

    printf("A : %d\n", a);
    printf("B: %d\n",*b);
    printf("C: %d\n",**c);
    printf("D: %d\n",***d);
}
