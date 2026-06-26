#include <stdio.h>

void swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

void main()
{
    int a, b;

    a = 10;
    b = 20;

    swap(&a, &b);

    printf("A : % d\n", a);
    printf(" B : % d\n", b);
}