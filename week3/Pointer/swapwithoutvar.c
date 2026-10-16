// swapping without third variable using pointer
#include<stdio.h>

int main()
{
    int a, b;
    int *ptr1=&a, *ptr2=&b;

    printf("Enter two numbers(a & b): ");
    scanf("%d%d", ptr1, ptr2);

    printf("\n-----Before Swapping-----");
    printf("\na = %d",a);
    printf("\nb = %d",b);

    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;

    printf("\n-----After Swapping-----");
    printf("\na = %d",a);
    printf("\nb = %d",b);


    return 0;
}