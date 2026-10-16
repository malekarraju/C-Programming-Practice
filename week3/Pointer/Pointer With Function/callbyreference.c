// Pass By Reference // Call By Reference
#include<stdio.h>

void swap(int*, int*);

int main()
{
    int num1=10, num2=5;
    printf("\n------Before Swapping in Main------\n");
    printf("num1 = %d\nnum2 = %d", num1, num2);

    swap(&num1, &num2);

    printf("\n------After Swapping in Main------\n");
    printf("num1 = %d\nnum2 = %d", num1, num2); // swap done

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

    printf("\n------Swapping in Function------\n");
    printf("num1 = %d\nnum2 = %d", *a, *b);

    return;
}