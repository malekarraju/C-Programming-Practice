#include<stdio.h>

void swap(int* , int*);

int main()
{
    int a=10, b=20;

    printf("\n------Before Swapping------");
    printf("\nvalue of a=%d", a);
    printf("\nvalue of a=%d", b);

    swap(&a,&b);

    printf("\n------After Swapping------");
    printf("\nvalue of a=%d", a);
    printf("\nvalue of a=%d", b);

    return 0;
}

void swap(int* x, int *y)
{
    int temp;

    temp=*x;
    *x=*y;
    *y=temp;
}